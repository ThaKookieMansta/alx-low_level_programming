#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success
 * -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, fileOpen, fileWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fileOpen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fileOpen < 0)
	{
		return (-1);
	}

	while (text_content && *(text_content + len))
	{
		len++;
	}

	fileWrite = write(fileOpen, text_content, len);
	close(fileOpen);
	if (fileWrite < 0)
	{
		return (-1);
	}
	return (1);
}
