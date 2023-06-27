#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: takes in an int
 * @b: takes another int
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int ok;
	ok = *a;

	*a = *b;
	*b = ok;
}
