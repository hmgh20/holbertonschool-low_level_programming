#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated memory containing s1 followed
 *         by s2 and null-terminated, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
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

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}
