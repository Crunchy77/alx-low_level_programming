#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* header: <time.h> */

/* main - main block */
/*Description: randomly generates a number and determines whether it is zero, positive or negative*/
/* Return: 0*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{

		if(n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is positive\n", n);
		}

	}
	return (0);
}
