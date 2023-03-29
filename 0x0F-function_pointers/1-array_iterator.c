#include "function_pointers.h"

/*
 * array_iterator - Iterates over array sending each value to action callback
 * @array: * int array
 * @size: size of the above array
 * @action: pointer to function callback
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
