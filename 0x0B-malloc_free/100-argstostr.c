#include "main.h"
#include <stdlib.h>


/**
 * argstostr - concats elements of array to a single string
 * @ac: int number of elems in the array
 * @av: char ** 2d array of chars
 *
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
