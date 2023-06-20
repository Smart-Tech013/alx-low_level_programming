#include <stdio.h>
/**
 * main - printing all single digit numbers of base 10 starting from 0
 *
 * Return: always 0(success)
 */
int main(void)
{
	int n = '0';
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
