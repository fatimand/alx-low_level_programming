#include "main.h"

/**
 * swap_int - swap two number
 * @a: param
 * @b: param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
