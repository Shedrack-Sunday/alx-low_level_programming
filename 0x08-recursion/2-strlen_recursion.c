#include "main.h"
/**
 *_strlen_recursion- computes the length of a string
 *@s:pointer to the string to find its length.
 *
 *Return:Returns length of a string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}