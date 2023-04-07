#include "main.h"

/**
 * binary_to_uint - converts binsry string to unsigned int
 * @b: the binary string
 *
 * Return: unsigned int The result of conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0;
	int int_value;
	int i = 0;
	int base = 1; /* first 2^0 equals 1*/

	if (b == NULL || !is_binary(b))
		return (0);

	while (b[i]) {
		int_value = b[i] - '0';
		dec_value += int_value * base;
  
		base = base * 2;
		i++;
	}
	return (dec_value);
}

/**
 * is_binary - checks is string s contains only binary digits
 * @b: binary string
 *
 * Return: Bool 1 or 0
 */
int is_binary(const char *b)
{
	while(*b)
	{
		if (*b != '0' || *b != '1')
			return (0);
		b++;
	}

	return (1);

}
