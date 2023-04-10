#ifndef MAIN_H
#define MAIN_H

/**
 * Desc: Header file to declare all functions of the project
 *
 */

#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
void _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
