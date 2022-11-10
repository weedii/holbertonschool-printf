#ifndef HEADER_FILES
#define HEADER_FILES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct main - defines main.
 *
 * @ch: character
 * @f:  The function associated
 */
typedef struct main
{
	char ch;
	int (*f)(va_list);
} print_struct;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_perc(va_list args);
int print(const char *format, va_list args);
int get_print_function(const char c, va_list args);
int print_d(va_list args);
int print_i(va_list args);

#endif
