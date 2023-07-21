#include "main.h"

/**
 * print_times_table - print the n times table starting with 0
 *
 * @n: param
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;
	int result;

	if (n < 0  || n > 15)
	{
		return;
	}
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ;  j <= n ; j++)
		{
			result = i * j;
			if (j != 0 && result < 10)
			{
				printf("   ");
			}
			else if (j != 0 && result < 100)
			{
				printf("  ");
			}
			else if (j != 0)
			{
				printf(" ");
			}

			printf("%d", result);
			if (j != n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
