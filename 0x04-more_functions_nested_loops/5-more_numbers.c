#include "main.h"
/* more headers goes there */

/**
* more_numbers - print 1 to 14  ten times followed by a newline
*
* Description: Print 1 to 14 ten times followed by a newline
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}
