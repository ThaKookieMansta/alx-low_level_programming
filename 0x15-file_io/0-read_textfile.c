#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: The text file to read and print
 * @letters: The number of letters to be read and printed
 * Return: The number of letters read and printed
 * 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileOpen, fileRead, fileWrite;
	char *fileBuffer;

	if (filename == NULL)
	{
		return (0);
	}

	fileBuffer = malloc(sizeof(char) * letters);
	if (fileBuffer == NULL)
	{
		return (0);
	}

	fileOpen = open(filename, O_RDONLY);
	fileRead = read(fileOpen, fileBuffer, letters);
	fileWrite = write(STDOUT_FILENO, fileBuffer, fileRead);

	if (fileOpen == -1 || fileRead == -1 || fileWrite == -1 ||
	fileWrite != fileRead)
	{
		free(fileBuffer);
		return (0);
	}

	free(fileBuffer);
	close(fileOpen);

	return ((ssize_t)fileWrite);
}
