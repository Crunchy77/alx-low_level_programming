#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Work
 * return: 0
 */

int main(void)
{
	int x;

	for(x = 0 ; x <10 ; x++)
	{
		printf("%d", x);
		if (x ==  9)
			printf("\n");
	}
	return (0);
}
