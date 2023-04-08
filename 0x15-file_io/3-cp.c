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
	int  fileFrom = -1, fileTo = -1, error = 0, bytes = 0, fileRead = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fileTo = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fileTo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closeFile(fileFrom);
		exit(99);
	}

	while (fileRead)
	{
		fileRead = read(fileFrom, buffer, 1024);
		if (fileRead < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			closeFile(fileFrom);
			closeFile(fileTo);
			exit(98);
		}
		else if (fileRead == 0)
			break;
		bytes += fileRead;
		error = write(fileTo, buffer, fileRead);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			closeFile(fileFrom);
			closeFile(fileTo);
			exit(99);
		}
	}
	error = closeFile(fileTo);
	if (error < 0)
	{
		closeFile(fileFrom);
		exit(100);
	}
	error = closeFile(fileFrom);
	if (error < 0)
		exit(100);
	return (0);
}

