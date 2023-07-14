#include<stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
int a;
char b;
a = 0;
while (a < 10)
{
b = '0' + a;
putchar(b);
a++;
}
a = 0;
while (a < 6)
{
b = 'a' + a;
putchar(b);
a++;
}
putchar('\n');
return (0);
}
