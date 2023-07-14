#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - last digit
 *
 * Return: Always 0
 */

int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d ", n);
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("is %d and is greater than 5\n", n);
}
else if (lastDigit == 0)
{
printf("is %d and is 0\n", n);
}
else if (lastDigit < 6)
{
printf("is %d and is less than 6 and not 0\n", n);
}
return (0);
}
