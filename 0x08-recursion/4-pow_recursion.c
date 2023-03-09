#include "main.h"


/**
 * _pow_recursion - compute factorial of a number
 * @x: int base
 * @y: int power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}

