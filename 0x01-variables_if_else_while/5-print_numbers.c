#include <stdio.h>

/**
 * main - Program that displays the entire alphabet in lowercase letters
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
