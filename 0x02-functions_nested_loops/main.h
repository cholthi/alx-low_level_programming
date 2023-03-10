#ifndef MAIN_H_
#define MAIN_H_
/* Include guard */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - writes the lowercase aphabet to stdout
 *
 * Return: void
 * writes the lowercase aphabet to stdout.
 */
void print_alphabet(void);


/**
 * print_alphabet - writes the lowercase aphabet to stdout 10 times
 *
 * Return: void
 * writes the lowercase aphabet to stdout 10 times.
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if the char is lower case
 *
 * Return: int bool
 * checks if the char is lower case.
 */
int _islower(int c);

/**
 * _islower - checks if the char is an alphabet char
 *
 * Return: int bool
 * checks if the char is an alphabet char.
 */
int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_digits(int n);

void print_to_98(int n);

#endif
