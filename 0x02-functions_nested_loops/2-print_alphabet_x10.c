#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */
void print_alphabet_x10(void)
{
int a;
int i;
for (i = 0; i < 10 ; i++)
{
a = 97;
while (a < 123)
{
putchar(a);
a++;
}
putchar('\n');
}
}
