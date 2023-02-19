#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print the numbers 0 to 9 uisng int [integer promotion]
*
* Description: Print the numbers 0 to 9
* Return: int
*/
int main(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		putchar('0' + start);
	}
	putchar('\n');
	return (0);
}
