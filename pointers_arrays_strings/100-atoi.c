#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			res = res * 10 - (s[i] - '0');
		}
		else if (found == 1)
		{
			break;
		}
		i++;
	}

	if (found == 0)
	{
		return (0);
	}

	if (sign < 0)
	{
		return (res);
	}

	return (-res);
}
