#include <stdlib.h>
#include <stdio.h>

/**
 * main - main block
 * Description: sth
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 48 ; x <= 57 ; x++)
		putchar(x);
	for (y = 97 ; y <= 102 ; y++)
	{
		putchar(y);
		if (y == 102)
			putchar('\n');
	}
	return (0);
}
