#include "main.h"
/**
 * _printf - printf implementation
 * @format: type of variable to be printed
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int state = 0, lengh = 0;

	va_start(args, format);
	if (format)
	{
		while (*format)
		{
			if (state == 0)
			{
				if (*format == '%')
					state = 1;
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
	return (-1);
}
