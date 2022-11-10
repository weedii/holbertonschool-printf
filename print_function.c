#include "main.h"

/***/

int print_char(va_list args)
{
    int lengh = 0;
    putchar(va_arg(args, int));
    lengh++;
    return (lengh);
}

/***/

int print_string(va_list args)
{
    char *s = va_arg(args, char *);
    int lengh = 0;

    if (s == NULL)
        s = "(null)";
    while (*s != '\0')
    {
        putchar(*s++);
        lengh++;
    }
    return (lengh);
}

/***/

int print_d(va_list args)
{
    int number = va_arg(args, int), b = 1, lengh = 0;
    if (number < 0)
    {
        putchar('-');
        lengh++;
        number = -number;
    }
    while (number / b >= 10)
        b *= 10;
    while (b > 0)
    {
        putchar('0' + number / b);
        lengh++;
        number %= b;
        b /= 10;
    }
    return (lengh);
}