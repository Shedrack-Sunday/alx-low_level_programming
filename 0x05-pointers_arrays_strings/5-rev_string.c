#include "main.h"
/**
 *rev_string-prints a string to stdout in reverse
 *@s:string to be printed in reverse,
 *Return:void.
 */

void rev_string(char *s)
{
	int p = 0, k, j = 0, m = 0;
	char c[1000];


/*First determine the size of the string*/
	while (*(s + p) != 0)
	{
		p++;
	}
	for (k = 0; k <= p - 1; k++)
	{
		*(c + j) = *(s + k);
		j++;
	}
	for (k = p - 1; k >= 0; k--)
	{
		*(s + m) = *(c + k);
		m++;
	}
}