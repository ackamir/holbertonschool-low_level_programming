#include <stdio.h>

/**
 * main - Program that displays the entire alphabet in upper & lowercase
 * Return: 0
 */

int main(void)
{
	char (ch);
	char (CH);

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A' ; CH <= 'Z' ; CH++)
	{
		putchar(CH);
	}

	putchar('\n');

	return (0);

}
