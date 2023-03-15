#include "main.h"
#include <stdlib.h>


/**
 * free_grid - free 2d array of ints
 * @grid: int ** 2d array of int
 * @height: array rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(arr[i]);

	}
	free(grid);
}
