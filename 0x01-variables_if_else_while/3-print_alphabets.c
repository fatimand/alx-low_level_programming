#include<stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
int a;
a = 97;
while (a < 123)
{
putchar(a);
a++;
}
a = 65;
while (a < 91)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
