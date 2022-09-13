#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: sth
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48 ; x < 58 ; x++)
	{
		putchar(x);
		if (x == 57)
		{
			putchar('\n');
		}
	}
	return (0);
}
