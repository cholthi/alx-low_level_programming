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
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
