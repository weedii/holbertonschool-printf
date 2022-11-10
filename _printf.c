#include "main.h"

/***/

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, lengh = 0, state = 0;

    va_start(args, format);

    if (format == NULL || (format[i] == '%' && strlen(format) == 1))
        return (-1);
    while (*format)
    {
        if (state == 0)
        {
            if (*format == '%' && strlen(format) > 1)
                state = 1;
            else if (*format == '%' && strlen(format) == 1)
                return (-1);

            else
            {
                putchar(*format);
                lengh++;
            }
        }
        else if (state == 1)
        {
            lengh += print(format, args);
            state = 0;
        }
        format++;
    }

    va_end(args);
    return (lengh);
}
