#include <stdio.h>
#include <string.h>

/**
 * main - print String
 * Return: return 1
 */
int main(void)
{
char str[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while(str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
return (1);
}

