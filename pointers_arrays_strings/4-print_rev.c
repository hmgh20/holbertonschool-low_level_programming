#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* الخطوة 1: حساب طول السلسلة النصية */
	while (s[len] != '\0')
	{
		len++;
	}

	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	/* الخطوة 3: طباعة سطر جديد في النهاية */
	_putchar('\n');
}
