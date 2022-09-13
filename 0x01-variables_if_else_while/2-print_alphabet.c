#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Work
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		if (x == 'z')
		{
			putchar('\n');
		}

	}


	return (0);
}
