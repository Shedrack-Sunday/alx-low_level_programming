#include "main.h"

/**
 * prime - helper founction for is_prime_number.
 * @n: input number
 * @i: counter
 * Return: 1 if true, 0 if false
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input number
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (prime(n, n - 1));
}
