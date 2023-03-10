#include "main.h"


/**
 * _test_sqrt_root - test the number is squareroot
 * @a: int
 * @b: int
 *
 * Return: int
 */

int _test_sqrt_root(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);

	return (_test_sqrt_root(a + 1, b));
}

/**
 * _sqrt_recursion - compute factorial of a number
 * @n: int int to square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);
	return (_test_sqrt_root(1, n));
}

