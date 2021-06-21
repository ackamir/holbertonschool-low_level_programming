#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that displays certain conditions on last digits
 * Return: 0
 */

int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	printf("Last digit of %d is ", n);
	printf("%d", LastDigit);

	if ((LastDigit > 5))
	{
		printf(" and is greater than 5\n");
		return (0);
	}
	if ((LastDigit == 0))
	{
		printf(" and is 0\n");
		return (0);
	}
	if ((LastDigit < 6) && (LastDigit != 0))
	{
		printf(" and is less than 6 and not 0\n");
		return (0);
	}
	return (0);
}
