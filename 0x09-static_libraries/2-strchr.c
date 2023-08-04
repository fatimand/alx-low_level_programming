#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: char
 * Return: a pointer to the first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
