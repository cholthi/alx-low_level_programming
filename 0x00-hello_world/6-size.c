#include <stdio.h>
#include <stdint.h>
/**
* main - output sizes length using printf stdio function
*
* Description: outputs sizes of various builtin types  with printf
* Return: 0
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
printf("Size of a int: %d byte(s)\n", (int) sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (int) sizeof(int64_t));
printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
