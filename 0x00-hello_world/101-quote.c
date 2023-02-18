#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
* main - output stringto sdterr using fprintf
*
* Description: outputs string to sdterr with fprintf
* Return: 1
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, strlen(str));
return (1);
}
