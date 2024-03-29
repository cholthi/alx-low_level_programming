#include "main.h"
#include <stdlib.h>


/**
 * create_array - Creates array of char uing malloc
 * @size: size in bytes to allocate
 * @c: character to initialize the empty bytes
 *
 * Return: * char or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr = malloc((sizeof(char) * size));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
