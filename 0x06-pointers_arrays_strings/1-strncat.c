#include "main.h"

/**
 * _strncat - concateanetes two strings
 * @dest: first string
 * @src: second string
 * @n: size
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lenDest, lenSrc;

	lenDest = strlen(dest);
	lenSrc = strlen(src);
	if (n > lenSrc)
		n = lenSrc;
	for (i = 0; i < n ; i++)
	{
		*(dest + lenDest + i) = *(src + i);
	}
	if (lenDest != 0)
		*(dest + lenDest + n) = '\0';
	return (dest);
}
