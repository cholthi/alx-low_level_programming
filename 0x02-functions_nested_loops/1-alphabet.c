#include "main.h"
/* more headers goes there */

/**
* main  print the lowercase alphabet to stdout
*
* Description: Print the lowercase alphabet to sdtout
* Return: int
*/

void print_alphabet_x10(void)
{
	char i;

        for (i = 'a'; i <= 'z'; i++)
                _putchar(i);
        _putchar('\n');
}

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
		print_alphabet_x10();

	return (0);
}
