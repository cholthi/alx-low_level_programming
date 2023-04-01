#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums its arguments including variadic ones
 * @n: const unsigned int, number of variadic args
 * @...: variadic args
 *
 * Return: int Result of the sum operation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum = 0;

	va_start(al, n);
	for (i = 1; i <= n; i++)
		sum += va_arg(al, int);

	va_end(al);

	return (sum);
}
