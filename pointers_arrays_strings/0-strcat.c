#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* الخطوة 1: إيجاد نهاية السلسلة الأولى (dest) */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* الخطوة 2: نسخ أحرف src إلى نهاية dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* الخطوة 3: إضافة حرف الختام في النهاية */
	dest[i] = '\0';

	return (dest);
}
