#include "main.h"

int _sqrt_recursion(int);


/**
 * _sqrt_recursion - compute factorial of a number
 * @n: int int to square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);
	return (check(1, n));

}

/**
 * test_sqrt_root - test the number is squareroot
 * @a: int
 * @b: int
 *
 * Return: int
 */

int test_sqrt_root(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);

	return (test_sqrt_root(a + 1, b));
}
