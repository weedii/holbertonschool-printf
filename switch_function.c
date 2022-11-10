#include "main.h"

/**
 * print - print and return lengh
 * @format: type of variable to be printed
 * @args: arguments
 * Return: the number of characters printed
 */

int print(const char *format, va_list args)
{
    int lengh = 0, s, c, d;

    switch (*format)
    {
    case 'c':
        c = get_print_function(*format, args);
        lengh += c;
        break;
    case 's':

        s = get_print_function(*format, args);
        lengh += s;
        break;
    case '%':
        putchar('%');
        lengh++;
        break;
    case 'd':
        d = get_print_function(*format, args);
        lengh += d;
        break;
    default:
        putchar('%');
        lengh++;
        putchar(*format);
        lengh++;
        break;
    }
    return (lengh);
}
