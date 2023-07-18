#include "main.h"

/**
 * main - entry to functions
 * @argc: argument count
 * @argv: array of arguments
 * Return: On fail prints error code
 */

int main(int argc, char *argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_copy(argv[1], argv[2]);
	exit(0);
}

/**
 * file_copy - function to copy files
 * @file_from: file copying from
 * @file_to: file copying to
 */

void file_copy(const char *file_from, const char *file_to)
{
	char buffer = malloc(sizeof(char) * 1024);
	int src, dest, reader;

	src = open(file_from, O_RDONLY);
	if (!file_from || src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC);
	while ((reader = read(src, buffer)) > 0)
	{
		if (write(dest, buffer, reader) != reader || dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n" file_to);
			exit(99);
		}
	}

	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(100);
	}

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
}
