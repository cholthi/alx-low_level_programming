#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print the numbers 0 to 9
*
* Description: Print the numbers 0 to 9
* Return: int
*/
int main(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		if (start != 9)
		{
			putchar('0' + start);
			putchar(',');
			putchar(' ');
		} else
		{
			putchar('0' + start);
		}
	}
	printf("\n");
	return (0);
}
