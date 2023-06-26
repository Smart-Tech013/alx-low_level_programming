#include "main.h"

/**
 * main - a function that prints 10 times the numbers, from 0 to 14
 * @a: input 
 * @b: input 
 * Return: always 0(succeess)
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 1;
		while (b <= 14)
		{
			_putchar(b + '0');
			b++;
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
