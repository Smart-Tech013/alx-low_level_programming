#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0(success)
 */
int main(void)
{
	char c = 97;
	char a = 65;

	while (c != 123)
	{
		putchar(c);
		c++;
	}

	while (a != 91)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
