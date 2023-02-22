#include "main.h"
/* more headers goes there */

/**
* times_table - print the 9 times table
*
* Description: print the nines times table
* Return: void
*/
void times_table(void)
{
	int x;
	int y;
	int table;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			table = y * x;
			if (table => 10)
			{
				_putchar((table / 10) + '0');
				_putchar((table % 10) + '0');
			} else
			{
				_putchar(table + '0');
			}

			if (x != 9)
				_putchar(',');
			if (x != 9)
				_putchar(' ');
			if (table < 10 && x != 9)
				_putchar(' ');

		}
		_putchar('\n');
	}
}

