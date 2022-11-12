#include "main.h"

/**
 * get_print_function - ontain the function that selects the correct
 *		function to perform the operation asked by the user
 * @c: format
 * @args: arguments
 * Return: pointer to the function that corresponds
 */

int get_print_function(const char c, va_list args)
{
	int i = 0;

	print_struct table[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_d},
		{'i', print_i},
		{'b', print_b}};

	while (table[i].ch)
	{
		if (table[i].ch == c)
			return (table[i].f(args));
		i++;
	}
	return (0);
}
