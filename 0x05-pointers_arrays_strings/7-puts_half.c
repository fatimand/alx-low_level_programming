#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 * Return: void 
 */
void puts_half(char *str)
{
	int i,len;
	
	len = strlen(str);

	for (i = len / 2; i < len ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
