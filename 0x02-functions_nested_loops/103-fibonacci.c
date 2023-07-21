#include <stdio.h>

/**
 * main - check Code
 * Return: 0
 */
int main(void)
{
	long fib1 = 0, fib2 = 1, sum;
	long total;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", total);

	return (0);
}
