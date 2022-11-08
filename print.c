#include "main.h"

/**
 * print - print and return lengh
 * @format: type of variable to be printed
 * @args: arguments
 * Return: the number of characters printed
 */

int print(const char *format, va_list args)
{
	int lengh = 0;
	char *s, c;

	switch (*format)
	{
	case 'c':
		c = va_arg(args, int);
		putchar(c);
		lengh++;
		break;
	case 's':
		s = va_arg(args, char *);
		while (*s != '\0')
		{
			putchar(*s++);
			lengh++;
		}
		break;
	case '%':
		putchar('%');
		lengh++;
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
