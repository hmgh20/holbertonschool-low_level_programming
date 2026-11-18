#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at most n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated memory containing s1 followed
 *         by the first n bytes of s2 and null-terminated, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}
