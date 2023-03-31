#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


int main(int argc, char *argv[])
{
	int n1, n2, result;
	char *op = argv[2];
	int (*op_fn)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((*op == '/' && n2 == 0) ||
	    (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	op_fn = get_op_func(argv[2]);
	result = op_fn(n1, n2);

	printf("%d\n", result);

	return (0);
}
