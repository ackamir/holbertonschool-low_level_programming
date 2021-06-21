#include <stdio.h>

/**
 * main - Program that displays the  alphabet except e and q in lowercase
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
