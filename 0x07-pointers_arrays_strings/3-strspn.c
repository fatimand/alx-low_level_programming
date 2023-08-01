#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: string
 * Return: size
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;
	unsigned int size;

	size = 0;
	f = 0;

	for (i = 0; s[i] ; i++)
	{
		f = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				size++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (size);
		}
	}
	return (size);
}
