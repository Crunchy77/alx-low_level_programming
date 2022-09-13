#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Something
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		if (x != 113 || x != 101)
		{
			putchar(x);
			if (x == 'z')
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
