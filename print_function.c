#include "main.h"

/**
 * print_char - function that print character
 * @args:   the arguments
 * Return: lengh of characters printed
 */

int print_char(va_list args)
{
	int lengh = 0;

	putchar(va_arg(args, int));
	lengh++;
	return (lengh);
}

/**
 * print_string - function that print string
 * @args:   the arguments
 * Return: lengh.
 */

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

/**
 * print_d - function that print int with "%d"
 * @args:   the arguments
 * Return: lengh.
 */

int print_d(va_list args)
{
	long int number = va_arg(args, int), b = 1, lengh = 0;

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

/**
 * print_i - function that print int with "%i"
 * @args:   the arguments
 * Return: lengh.
 */

int print_i(va_list args)
{
	long int number = va_arg(args, int), b = 1, lengh = 0;

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

/**
 * print_b - function that print int with "%b"
 * @args:   the arguments
 * Return: lengh.
 */

int print_b(va_list args)
{
	unsigned int number = va_arg(args, unsigned int), table[32];
	int lengh = 0, i = 0;

	while (number > 0)
	{
		table[i] = number % 2;
		number /= 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		putchar(table[i] + '0');
		lengh++;
	}
	return (lengh);
}
