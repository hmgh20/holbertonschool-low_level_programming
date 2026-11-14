#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number string
 * @n2: Second number string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: A pointer to the result, or 0 if it cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l = 0;
	int d1, d2, sum, carry = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || carry)
	{
		d1 = i >= 0 ? n1[i] - '0' : 0;
		d2 = j >= 0 ? n2[j] - '0' : 0;
		sum = d1 + d2 + carry;
		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
		k++;
	}
	if (k >= size_r)
		return (0);
	r[k] = '\0';
	for (l = 0; l < k / 2; l++)
	{
		char tmp = r[l];

		r[l] = r[k - 1 - l];
		r[k - 1 - l] = tmp;
	}
	return (r);
}
