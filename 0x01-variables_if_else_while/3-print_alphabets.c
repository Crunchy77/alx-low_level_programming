#include <stdlib.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Work
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);

	}

	for (y = 'A' ; y <= 'Z' ; y++)
	{
		putchar(y);

		if (y == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
