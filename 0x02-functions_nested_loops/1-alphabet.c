#include "main.h"

void print_alphabet(void)
{
int a;
a = 97;
while (a < 123)
{
putchar(a);
a++;
}
putchar('\n');
}
/**
 * main - control number
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
return (0);
}
