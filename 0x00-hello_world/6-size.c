#include <stdio.h>

/**
 * main - This is a brief program that displays the size of data
 * Return: 0
 */
int main(void)
{

	int a = 16;
	printf("Size of a char: %d byte(s) \n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)  \n", sizeof(float));
	return (0);

}
