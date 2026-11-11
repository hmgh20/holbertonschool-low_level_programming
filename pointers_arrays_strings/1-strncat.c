#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* الخطوة 1: إيجاد نهاية السلسلة الأولى (dest) */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* الخطوة 2: نسخ بحد أقصى n بايت من src إلى dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* الخطوة 3: إضافة حرف الختام في النهاية */
	dest[i] = '\0';

	return (dest);
}
