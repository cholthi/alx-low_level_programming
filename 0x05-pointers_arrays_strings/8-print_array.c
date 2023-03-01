#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
* print_array - get the length of a string given to it
* @a: * int array
* @n: int length to print
*
* Description: get the length of a string given to it
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if ((i + 1) != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	_putchar('\n');
}
