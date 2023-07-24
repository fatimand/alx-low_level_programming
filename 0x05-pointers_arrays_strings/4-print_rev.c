#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int j, len;

	len = strlen(s);

	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar('\n');
}
