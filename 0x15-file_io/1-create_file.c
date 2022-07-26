#include "main.h"
/**
 * create_file -creates a file
 * @filename: name of file to create.
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd_write = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (fd_write == -1)
	{
		return (-1);
	}

	return (1);
}


/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}