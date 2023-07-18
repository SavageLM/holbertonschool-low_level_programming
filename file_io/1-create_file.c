#include "main.h"

/**
 * create_file - function to create and write contents to file
 * @filename: name of file to be made
 * @text_content: string to be written to file
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int tmp, len;

	if (filename == NULL)
		return (-1);

	tmp = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (tmp == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
		write(tmp, text_content, len);
	}

	close(tmp);
	return (1);
}
