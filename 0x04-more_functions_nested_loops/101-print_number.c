#include "main.h"

/**
 * print_number - print an integer
 *
 *@n: number
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		print_number(n);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{

		if (n / 10 > 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
}
