#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print the  alphabetfollowed by newline
*
* Description: Print the alphabet followed by newline
* Return: int
*/
int main(void)
{
	int start;
	char start2;

	for (start = 0; start <= 9; start++)
	{
		putchar('0' + start);
	}
	for (start2 = 'a'; start2 <= 'f'; start2++)
	{
		putchar(start2);
	}
	putchar('\n');
	return (0);
}
