#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest : pointer destination
 * @src : pointer source
 *
 * Description - concatenation
 * Return : char
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0 ; src[j] != '\0' ; ++j)
	{
		dest[length] = src[j];
		length++;
	}

	dest[length] = '\0';
	
	return (dest);
}
