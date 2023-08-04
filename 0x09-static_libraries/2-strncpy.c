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

	lenDest = strlen(dest);
	i = lenDest;
	for (i = 0; i < n && src[i] ; i++)
	{
		*(dest + i) = *(src + i);
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
