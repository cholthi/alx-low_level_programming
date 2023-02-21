#include "main.h"
/* more headers goes there */

/**
* print_alphabet_x10 - print the lowercase alphabet to stdout 1o times
*
* Description: Print the lowercase alphabet to sdtout 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	char i;
	int count = 1;

	while (count <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		count++;
	}
}

