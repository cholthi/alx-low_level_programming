#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print the lower case alphabet except q and e
*
* Description: Print the lowercase alphabet except q and e
* Return: int
*/
int main(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		if (start == 'q' || start == 'e')
			continue;
		putchar(start);
	}
	putchar('\n');
	return (0);
}
