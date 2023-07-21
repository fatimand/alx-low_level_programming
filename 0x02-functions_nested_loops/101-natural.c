#include <stdio.h>


long natural(long n);
/**
 * main - check Code
 *
 * Return: Alawys 0
 */
int main(void)
{
	printf("%lu ", natural(10));
	printf("\n");
	return (0);
}
/**
 * natural - list th natural number
 * @n: param
 * Return: sum
 */
long natural(long n)
{
	long i;
	long sum;

	sum = 0;
	for (i = 1; i < n; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0) && i != 1024)
		{
			sum += i;
		}
	}
	return (sum);
}
