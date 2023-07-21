#include <stdio.h>


void fibo(int n, long a, long b);

/**
 * main - check Code
 * Return: 0
 */
int main(void)
{
	fibo(50, 0, 1);
	printf("\n");
	return (0);
}
/**
 * fibo - fibonacci function
 * @n: param
 * @a: param
 * @b: param
 * Return: void
 */

void fibo(int n, long a, long b)
{
	if (n == 0)
	{
		printf("%lu", a + b);
		return;
	}
	else if (n == 1)
	{
		printf("%lu", a + b);
		return;
	}
	else
	{
		if (n <= 50)
		{
			printf("%lu, ", a + b);
		}
		else
		{
			printf("%lu", a + b);
		}
		fibo(n - 1, b, a + b);
	}
}
