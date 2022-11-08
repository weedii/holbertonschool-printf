#include "main.h"

/***/

void print_char(va_list ch)
{
    putchar(va_arg(ch, int));
}

/***/

void print_string(va_list ch)
{
    int i, len;
    char *str;

    str = va_arg(ch, char *);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        putchar(str[i]);
    }
}

/***/

int _printf(const char *format, ...)
{
    va_list ch;
    int i = 0, k, len, count_lengh = 0;
    void (*f)(va_list) = print_char;
    void (*f1)(va_list) = print_string;
    char *_string;

    va_start(ch, format);
    while (format[i])
    {

        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
            case 'c':

                len = strlen(format);
                for (k = 0; format[k] != '%'; k++)
                {
                    putchar(format[k]);
                }
                if (format[k] == '%')
                {
                    k++;
                    (*f)(ch);
                    k++;
                    while (k < len)
                    {
                        putchar(format[k]);
                        k++;
                    }
                }
                break;
            case 's':
                len = strlen(format);
                for (k = 0; format[k] != '%'; k++)
                {
                    putchar(format[k]);
                }
                if (format[k] == '%')
                {
                    k++;
                    (*f1)(ch);
                    k++;
                    while (k < len)
                    {
                        putchar(format[k]);
                        k++;
                    }
                }

            default:
                break;
            }
        }
        i++;
    }
    if (!format)
    {
        _string = va_arg(ch, char *);
        len = strlen(_string);
        for (k = 0; k < len; k++)
        {
            putchar(_string[k]);
            count_lengh += 1;
        }
    }
    va_end(ch);
    return (count_lengh);
}
