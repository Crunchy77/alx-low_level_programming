#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest : pointer destination
 * @src : pointer source
 * @n : number of bytes
 * 
 * Description - concatenation
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0 ; src[j] != '\0' && j < n ; ++j)
	{
		dest[length] = src[j];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
