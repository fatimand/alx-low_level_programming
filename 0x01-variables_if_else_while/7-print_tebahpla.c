#include<stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
int a;
a = 122;
while (a > 96)
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
