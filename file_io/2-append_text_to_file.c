#include "main.h"

/**
 * append_text_to_file - does what it says
 * @filename: name of file to append
 * @text_content: string to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int tmp, len;

	if (filename == NULL)
		return (-1);

	tmp = open(filename, O_WRONLY | O_APPEND);

	if (tmp == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
		write(tmp, text_content, len)
	}

	close(tmp);
	return (1);
}
