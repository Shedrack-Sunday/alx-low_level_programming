#include "holberton.h"

/**
 * isSqrt - computes the square of a number
 * @n: input number
 * @c: counter
 * Return: square root of number
 */

int isSqrt(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (isSqrt(n, c + 1));
}

/**
 * _sqrt_recursion -computes natural square root of a number
 * @n: input number
 * Return: square root of a numer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}
