#include "main.h"

/**
 * convert - function that convert between bases
 * @number: number to be convertd
 * @base:   base to convert to
 * Return:  the converted number
 */

int convert(long int number, int base)
{
	if (number == 0 || base == 10)
		return number;
	return (number % base) + 10 * convert(number / base, base);
}
