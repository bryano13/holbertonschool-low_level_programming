#include "holberton.h"

/**
 * read_textfile - function that reads a text
 * @filename: name of the file
 * @letters: amount of letters
 * Return: write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (file == -1 || rd == -1 || wr == -1)
	{
		return (0);
		free(buffer);
	}
	free(buffer);
	close(file);
	return (wr);
}
