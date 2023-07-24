#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 * Return: void 
 */
void puts_half(char *str)
{
	int i, len, n;
	
	len = strlen(str);
	n = ( len % 2 ? len - 1 : len);

	for (i = n / 2 ; i < n ; i++)
	{
		putchar(str[ len % 2 ? i + 1 : i]);
	}
	putchar('\n');
}
