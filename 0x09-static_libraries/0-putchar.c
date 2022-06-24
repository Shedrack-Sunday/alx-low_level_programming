#include "main.h"

/**
 * main - Entry point
 * Return: 0 (success)
 * _putchar - writes the character c to stdout
 * 0-putchar.c - returns _putchar
 */

int main(void)
{
	char c[9] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
