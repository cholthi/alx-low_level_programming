#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


/*
 * Desc: Header file containing functions functions signatures, 
 * 	function pointers declaration
 */

void (*f)(char *);
void print_name(char *name, void (*f)(char *));
void _putchar( char);
