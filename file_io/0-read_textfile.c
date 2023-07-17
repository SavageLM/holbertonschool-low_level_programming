#include "main.h"

/**
 * read_textfile - function to read a text file
 * @letters: number of char to read and print
 * @filename: file to read
 * Return: returns number of read and printed char, or 0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t tmp, nump;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	tmp = open(filename, O_RDONLY);
	if (tmp == -1)
		return (0);

	nump = read(tmp, buffer, letters);

	write(STDOUT_FILENO, buffer, nump);

	free(buffer);
	close(tmp);
	return (nump);
}
