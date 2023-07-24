#include "main.h"

/**
 * rev_string - that reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char c;
	int len;

	len = strlen(s) - 1;
	k = len;
	j = len / 2;

	for (i = 0; i < j; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k] = c;
		k--;
	}
}
