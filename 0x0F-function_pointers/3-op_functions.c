#include <stdio.h>
#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds to two ints
 * @a: first int to add
 * @b: second int to add
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers and return the subs.
 * @a: first number to sub.
 * @b: second number to sub.
 *
 * Return: The sub of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of a by b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the modulus of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The mod of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
