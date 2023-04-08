#include "main.h"

/**
 * append_text_to_file - A function that appends text to the end of a  file
 * @filename: The file to open and append
 * @text_content: The NULL terminated string to the EOF
 * Return: 1 on success
 * -1 if the function fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileOpen, fileWrite, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	while (*(text_content + len))
	{
		len++;
	}

	fileOpen = open(filename, O_RDWR | O_APPEND);
	fileWrite = write(fileOpen, text_content, len);

	if (fileOpen == -1 || fileWrite == -1)
	{
		return (-1);
	}


	close(fileOpen);

	return (1);
}
