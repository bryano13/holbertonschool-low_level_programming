#include "holberton.h"
/**
 *append_text_to_file - Appends text at the end of a file
 *@filename: path of the file
 *@text_content: string to append
 *Return: 1 if success, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rd_error = 0, result;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + rd_error))
			rd_error++;
	}
	result = write(fd, text_content, rd_error);
	if (result >= 0)
		return (1);
	else
		return (-1);
	close(fd);
}
