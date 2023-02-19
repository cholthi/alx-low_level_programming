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
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		putchar(start);
	}
	for (start = 'A'; start <= 'Z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
