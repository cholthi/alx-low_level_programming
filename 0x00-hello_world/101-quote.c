#include <stdio.h>
/**
* main - output stringto sdterr using fprintf
*
* Description: outputs string to sdterr with fprintf
* Return: 1
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, str);
return (1);
}
