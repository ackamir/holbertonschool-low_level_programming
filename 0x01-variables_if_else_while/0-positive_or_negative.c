#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A brief program that prints a random number and determines whether it
 *        is positive, negative or zero.
 *
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;

	if ((n == 0))
	{
		printf("%d is zero\n", n);
		return (0);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}

	return (0);
}
