#include "main.h"

/**
 * print_diagonal - draws a straight line
 * @n: param
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 0; j < n ; j++)
		{
			for (i = 0; i < j + 1 ; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}

	}
	else
	{
	_putchar('\n');
	}
}
