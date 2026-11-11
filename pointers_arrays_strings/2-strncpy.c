#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to be copied
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* الخطوة 1: نسخ أحرف src حتى الوصول إلى n أو نهاية src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* الخطوة 2: ملء المساحة المتبقية (إن وجدت) بـ \0 */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
