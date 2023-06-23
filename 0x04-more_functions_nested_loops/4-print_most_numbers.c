#include "main.h"

/**
 * main - a function that prints the numbers, from 0 to 9,
 * @c: is input
 * return: always 0 (success)
 */
void print_most_numbers(void)
{
        int c;

        c = 0;
        while (c <= 9)
        {
		if (c != 2 && c != 4)
                _putchar(c + '0');
                c++;
        }
	_putchar('\n');

        return (0);
}
