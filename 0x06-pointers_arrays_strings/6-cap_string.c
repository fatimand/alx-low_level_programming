#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @s: string
 * Return: result
 */
char *cap_string(char *s)
{
	int i, j, len, found;
	char separators[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	len = strlen(s);
	found = 0;

	for (i = 0; i < len; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a' && found == 1)
		{
			s[i] = s[i] + 'A' - 'a';
			found = 0;
			continue;
		}
		for (j = 0; j < 10; j++)
		{
			if (s[i] == separators[j])
			{
				found = 1;
				break;
			}
			else
			{
				found = 0;
			}
		}
	}
	return (s);
}
