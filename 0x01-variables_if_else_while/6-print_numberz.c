#include <stdio.h>

/**
 * main - Program that displays numbers from 0-9 as chars
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
