#include "main.h"
/**
 *_pow_recursion-computes x raised to power y.
 *@x:number to be raised to power y.
 *@y:power in which x is raised.
 *
 *Return: x raised to power i.
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}