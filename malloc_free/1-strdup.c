#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space containing a copy
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
