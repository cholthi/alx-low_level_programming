#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

   /* print_last_digit(98); */
    /*print_last_digit(0); */
    r = ((unsigned int) -(INT_MIN + 1)) + 1U;
    printf("%d", r);
    _putchar('\n');
    return (0);
}
