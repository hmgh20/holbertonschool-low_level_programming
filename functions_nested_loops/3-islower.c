#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to check (passed as an ASCII integer)
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
