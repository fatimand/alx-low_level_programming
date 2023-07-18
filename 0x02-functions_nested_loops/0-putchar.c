#include "main.h"

/**
 * main - control number
 *
 * Return: Always 0
 */
int main(void)
{
int i;
int len;
char str[] = "_putchar";
len = strlen(str);
for (i = 0; i < len ; i++)
{
	putchar(str[i]);
}
putchar('\n');
return (0);
}
