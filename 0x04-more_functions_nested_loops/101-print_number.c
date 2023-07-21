#include "main.h"

/**
 * print_number - print an integer
 *
 *@n: number
 */
void print_number(int n)
{
	unsigned int nbr = n;
	if (n < 0)
	{
		nbr = -n;
		_putchar('-');
	}

	if ((nbr / 10) > 0)
	{
		print_number(nbr / 10);
	}
	_putchar((nbr % 10) + '0');
}
