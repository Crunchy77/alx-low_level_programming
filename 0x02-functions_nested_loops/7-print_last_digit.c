#include "main.h"

/**
 * print_last_digit - return last digit
 * @n: number to work on
 *
 * Description: Work
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int last_digit;

	n = n >= 0 ? n : n * -1;

	last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
