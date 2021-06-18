#include <stdio.h>

/**
 * main - This is a brief program that displays the size of data
 * Return: 0
 */
int main() {
	int a = 16;
	printf("Size of a char: %d\n",sizeof(char)"byte(s)");
	printf("Size of an int: %d\n",sizeof(int)"byte(s)");
	printf("Size of a long int: %d\n",sizeof(long int)"byte(s)");
	printf("Size of a long long int: %d\n",sizeof(long long int)"byte(s)");
	printf("Size of float: %d\n",sizeof(float)"byte(s)");
	return 0;

}
