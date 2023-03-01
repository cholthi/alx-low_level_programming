#include "main.h"
/* more headers goes there */

/**
* swap_int - function to swap two int pointers
* @a: *int int t swap
* @b: *int int to swap
*
* Description: function to swap two int pointers
* Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

