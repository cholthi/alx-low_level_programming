#include "main.h"
/* more headers goes there */

/**
* main - Print the _putchar string
*
* Description: Print the _putchar
* Return: int
*/

int main(void)
{
	char str[] = "_putchar";
	int i;
	for (i=0; i <=7; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
