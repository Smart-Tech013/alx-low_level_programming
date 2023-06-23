#include <main.h>

/**
 * main - a function that prints the numbers, from 0 to 9
 * @c: the numbers 
 * Return: 0 for success
 */
void print_numbers(void)
{
	int c = 0;
	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
	return (0);
}
