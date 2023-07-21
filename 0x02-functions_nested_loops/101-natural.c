#include <stdio.h>


int natural(void);
/**
 * main - check Code
 *
 * Return: Alawys 0
 */
int main(void)
{
	printf("%d", natural());
	printf("\n");
	return (0);
}
/**
 * natural - list th natural number
 * Return: sum
 */
int natural(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}
