#include "main.h"
/* more headers goes there */

/**
* reverse_array - reverses elements of array
* @a: * int array ints
* @n: int number of elements
*
* Description: reverses elements of arrays
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; n >= 0; i++, n--)
		a[i] = a[n];

}
