#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: first string
 * @src: second string
 * @n: size
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, lenDest;
	char *dest1 = dest;

	lenDest = strlen(dest);
	for (i = 0; i < lenDest ; i++)
	{
		*(dest1 + i) = *(dest + i);
	}
	for (i = 0; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	if (*(src + n - 1) != '\n')
	for (i = n ; i < lenDest ; i++)
	{
		*(dest + i) = *(dest1 + i);
	}
	return (dest);
}
