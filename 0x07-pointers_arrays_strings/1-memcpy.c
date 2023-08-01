#include"main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source string
 * @n: size
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i ,j ;
	j = n;
	for (i = 0; i < j && src[i] != '\0' ; i++)
	{
		*(dest + i ) = src[i];
	}
	return (dest);
}
