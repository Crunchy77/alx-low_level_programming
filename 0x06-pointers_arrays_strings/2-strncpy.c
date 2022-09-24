#include "main.h"

/**
 * *_strncpy - copy of a string
 * @dest: where copied string is
 * @src: source string
 * @n: bytes to copy
 *
 * Description - copying
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
