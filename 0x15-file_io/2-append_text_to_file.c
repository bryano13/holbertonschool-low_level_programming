#include "holberton.h"

/**
  * append_text_to_file - Append text.
  * @filename: File
  * @text_content: text.
  * Return: integer.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		write(3, text_content, len);
	}
	else
		close(fd);
		return (1);
}
