#include "main.h"

/***/

int get_print_function(const char c, va_list args)
{
    int i = 0;

    print_struct table[] = {
        {'c', print_char},
        {'s', print_string},
        {'d', print_d},
        {'i', print_i}};

    while (table[i].ch)
    {
        if (table[i].ch == c)
            return (table[i].f(args));
        i++;
    }
    return (0);
}
