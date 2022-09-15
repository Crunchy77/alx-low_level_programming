#include "main.h"

/**
 * print_numbers - Print 0 to 9
 * Description : Work
 * Return: void
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar('0' + num);
		if (num == 9)
			_putchar('\n');
		num++;
	}
}
