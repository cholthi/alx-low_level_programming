#include "main.h"
/* more headers goes there */

/**
* rev_string - modify function param using a pointer
* @s: *char to assign to
*
* Description: Check argument if numeric digit
* Return: void
*/
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;
 
	length = _strlen(string);
 
	begin = string;
	end = string;
 
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
		end++;
 
	for ( c = 0 ; c < length/2 ; c++ ) 
	{        
		temp = *end;
		*end = *begin;
		*begin = temp;
 
		begin++;
		end--;
	}
}

/**
* _strlen - get the length of a string given to it
* sn: *s char string to calculate length in bytes
*
* Description: get the length of a string given to it
* Return: int
*/
int _strlen(char *s);
{
        int len = 0;

        while(*(s + len) != '\0')
                len++;

        return (len);
}

