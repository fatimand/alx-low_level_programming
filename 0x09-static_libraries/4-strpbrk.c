#include "main.h"

/**
 * _strpbrk - serachs a string for any of a set of byte
 * @s: string
 * @accept: string
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
