#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print the lower case alphabet
*
* Description: Print the lowercase alphabet
* Return: int
*/
int main(void)
{
	char start;
	for (start = 'a'; start <= 'z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
