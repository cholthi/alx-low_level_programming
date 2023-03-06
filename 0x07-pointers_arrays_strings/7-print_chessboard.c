#include "main.h"


/**
 * print_chessboard - print 8 X 8 chess baord
 * @a: array multidimensional array representing chessboard
 *
 * Return: chess
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
