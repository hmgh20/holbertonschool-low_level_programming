#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer to the string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datar[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; data1[j] != '\0'; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datar[j];
				break;
			}
		}
	}

	return (s);
}
