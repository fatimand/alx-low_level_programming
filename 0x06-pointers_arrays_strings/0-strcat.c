#include "main.h"

/**
 * _strcat - concateanetes two strings
 * @dest: first string
 * @src: second string
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j] ; j++)
		dest[i++] = src[j];

	return (dest);
}
