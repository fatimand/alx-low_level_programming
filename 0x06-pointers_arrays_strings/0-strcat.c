#include "main.h"

/**
 * _strcat - concateanetes two strings
 * @dest: first string
 * @src: second string
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int i, lenDest, lenSrc;

	lenDest = strlen(dest) - 1;
	lenSrc = strlen(src);

	for (i = 0; i < lenSrc ; i++)
	{
		*(dest + lenDest + i) = *(src + i);
	}
	if (lenDest != 0)
		*(dest + lenDest + lenSrc - 1) = '\n';
	return (dest);
}
