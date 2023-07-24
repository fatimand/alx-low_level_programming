#include "main.h"

/**
 * puts2 - print every character
 * @str: param
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');

}
