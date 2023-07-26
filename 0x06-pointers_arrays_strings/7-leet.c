#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: result
 */
char *leet(char *s)
{
	int i, j, len;
	char a[5][3] = {{'a', 'A', '4'}, {'e', 'E', '3'}, {'o', 'O', '0'},
		{'t', 'T', '7'}, {'l', 'L', '1'}};
	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = 0 ; j < 5; j++)
		{
			if (a[j][0] == s[i] || a[j][1] == s[i])
			{
				s[i] = a[j][2];
				break;
			}
		}
	}
	return (s);
}
