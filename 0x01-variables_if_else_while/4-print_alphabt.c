#include<stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
int a;
a = 97;
while (a < 123)
{
if (a != 101 && a != 113)
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
