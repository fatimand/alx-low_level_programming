#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 * @a: tab
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, s;

	for (i = 0, j = n - 1; i < n / 2 ; i++, j--)
	{
		s = a[i];
		a[i] = a[j];
		a[j] = s;
	}
}
