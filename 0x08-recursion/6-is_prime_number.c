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
	if (a == 1)
		return (1);
	if ((a % b) == 0)
		return (0);
	return (check_prime(a, b-1));

}

/**
 * is_prime_number - check number is prime
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, n / 2));
}

