#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase
 *
 * Return: always 0(success)
 */
int main(void)
{
	char c = 97;

	while (c != 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
