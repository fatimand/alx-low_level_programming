#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: param
 * @size: param
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
		sum1 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
