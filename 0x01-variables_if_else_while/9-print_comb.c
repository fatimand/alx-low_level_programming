#include<stdio.h>

/**
 * main - Entry point
 *   print 0, 1 to 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int a = 0;

while (a <= 9)
{
putchar(a + 48);
if (a != 9)
{
putchar(',');
putchar(' ');
}
++a;
}
putchar('\n');

return (0);
}
