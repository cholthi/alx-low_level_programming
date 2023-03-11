#include "main.h"

/**
 * check_prime  - check number is prime
 * @a: int
 * @b: int
 *
 * Return: int
 */
int check_prime(int a, int b)
{
	int res;

	if (a < 2)
		return (0);
	if (a == 2 || a == 3)
		return (1);
	if (a % b == 0)
		return (0);
	if (b <= a / 2)
		return (1);

	res = check_prime(a, b + 1);
	return (res);
}

/**
 * is_prime_number - check number is prime
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

