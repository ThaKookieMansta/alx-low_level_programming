#include "main.h"


/**
 * closeFile - A function that closes a file and prints error when closed file
 * @desc: Error description for closed file
 * Return: 1 on success
 * -1 on failure
 */
int closeFile(int desc)
{
	int errorMessage;

	errorMessage = close(desc);
	if (errorMessage < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
	return (errorMessage);
}

/**
 * main - A program that copies the content of a file to
 * another file.
 * @argc: The number of arguments passed
 * @argv: The pointers to the array of arguments
 * Return: 1 on success
 * exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int  fileFrom, fileTo, fileRead, fileWrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	fileRead = read(fileFrom, buffer, 1024);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fileFrom == -1 || fileRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fileWrite = write(fileTo, buffer, fileRead);
		if (fileTo == -1 || fileWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		fileRead = read(fileFrom, buffer, 1024);
		fileTo = open(argv[2], O_WRONLY | O_APPEND);


	} while (fileRead > 0);

	closeFile(fileFrom);
	closeFile(fileTo);
	return (0);
}
