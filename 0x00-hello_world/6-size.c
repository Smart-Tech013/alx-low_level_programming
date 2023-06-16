#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int x;
	long int y;
	long long int z;
	float a;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(x));
	printf("Size of a long int: %ld byte(s)\n", sizeof(y));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(z));
	printf("Size of a float: %ld byte(s)\n", sizeof(a));

	return (0);
}
