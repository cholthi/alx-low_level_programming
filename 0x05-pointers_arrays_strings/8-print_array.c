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

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);

	_putchar('\n');
}
