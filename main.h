#ifndef HEADER_FILES
#define HEADER_FILES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int statement(const char *format, int state);
int print(const char *format, int state, va_list args);

#endif