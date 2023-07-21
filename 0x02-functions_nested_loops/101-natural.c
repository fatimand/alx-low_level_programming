#include <stdio.h>


int natural(int n);
/**
 * main - check Code
 *
 * Return: Alawys 0
 */
int main(void)
{
	printf("%d ", natural(10));
	printf("\n");
	return (0);
}
/**
 * natural - list th natural number
 * @n: param
 * Return: sum
 */
int natural(int n)
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < n; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0) && i != 1024)
		{
			printf("%d  ", i);
			sum += i;
		}
	}
	printf("\n");
	return (sum);
}
