#include  "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array, and initialiazes it with a specific
 * char @c
 *
 * @size: Size of the array of chars to be created
 *
 * @c: Char value to initialize the array with
 *
 * Return: Pointer to the array created OR NULL if @size = 0 OR
 * the creation of the array fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int j = 0;

	p = malloc(size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
	p[j] = c;
	}
	if (!p)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
