#include "main.h"


/**
 * factorial - compute factorial of a number
 * @s: int number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

