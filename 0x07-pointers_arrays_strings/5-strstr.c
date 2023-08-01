#include "main.h"

/**
 * _strstr - locale a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to the beginning of the located
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, f, len, len1;

	len = strlen(needle);
	len1 = strlen(haystack);
	f = 0;

	for (i = 0; i < len1 ; i++)
	{
		f = i;
		for (j = 0; j < len ; j++)
		{
			if (haystack[f] == needle[j])
			{
				f++;
			}
			else
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
