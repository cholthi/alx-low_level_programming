#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and return a pointer to it.
 * @b: The number of bytes to be reserved.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
