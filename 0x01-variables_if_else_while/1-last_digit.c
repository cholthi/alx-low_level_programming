#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - check various integral bumber values
*
* Description: checkThe last digit and outputs based on condition
* Return: int
*/
int main(void)
{
	int n;
	int last_digit;
	char *format = "Last digit of %d is %d and is less than 6 and not 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6 && n != 0)
	printf(format, n, last_digit);
	return (0);
}
