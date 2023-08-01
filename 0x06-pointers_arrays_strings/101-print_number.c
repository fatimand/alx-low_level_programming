#include "main.h"

/**
 * print_number - prints an integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
