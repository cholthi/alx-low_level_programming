#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print the lower case alphabet in reverse
*
* Description: Print the lowercase alphabet in reverse
* Return: int
*/
int main(void)
{
	char start;

	for (start = 'z'; start >= 'a'; start--)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
