#include <stdlib.h>
#include <stdio.h>

 /**
  * main - main block
  * Description: sth
  * Return: 0
  */

int main(void)
{
	int x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
		if (x == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}
