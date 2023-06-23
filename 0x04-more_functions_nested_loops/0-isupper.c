#include "main.h"

/**
 * main - a function that checks for uppercase character.
 * @c: takes in a character
 * Return: 0 for uppercase and 1 for lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
