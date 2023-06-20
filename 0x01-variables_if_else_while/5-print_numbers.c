#include <stdio.h>
/**
 * main - printing all single digit numbers of base 10 starting from 0
 *
 * Return: always 0(success)
 */
int main(void)
{
	int c = 0;

	while (c != 10)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
