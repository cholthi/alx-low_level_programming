#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints args separated by separator
 * @separator: const char separator character
 * @n: number of args to print
 * @...: variadic args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;

	va_start(al, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(al, int));
		if (separator)
		{
			if (i != n)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(al);
}
