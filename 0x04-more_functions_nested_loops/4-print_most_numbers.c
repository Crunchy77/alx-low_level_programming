#include "main.h"

/**
 * print_most_numbers - print all but 2 or 4
 * Description: Work
 * Return : void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{
		if (c != 2 && c != 4)
			_putchar('0' + c);
		if (c == 9)
			_putchar('\n');
	}
}
