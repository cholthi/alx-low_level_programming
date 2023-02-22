#include "main.h"
/* more headers goes there */

/**
* jack_bauer - Print jack bauer day minutes
*
* Description: Print jack bauer day minutes
* Return: void
*/
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (minutes < 10)
				_putchar(minutes + '0');
			else
			{
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
			}
			_putchar(':');
			if (hours < 10)
				_putchar(hours + '0');
			else
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) +'0');
			}
			_putchar('\n');
		}
	}
}

