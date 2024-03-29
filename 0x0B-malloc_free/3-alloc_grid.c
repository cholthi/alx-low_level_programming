#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - dynamically create 2d array of ints
 * @width: array columns
 * @height: array rows
 *
 * Return: ** int 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(arr[j]);

			free(arr);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
