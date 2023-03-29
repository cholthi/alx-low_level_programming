#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


/*
 * Desc: Header file containing functions functions signatures, 
 * 	function pointers declaration
 */

#include <stdlib.h>
void (*f)(char *);
void print_name(char *name, void (*f)(char *));
void _putchar( char);
void (*action)(int);
void array_iterator(int *array, size_t size, void (*action)(int));
int (*cmp)(int);
int int_index(int *array, int size, int (*cmp)(int));

#endif
