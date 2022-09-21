#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (k = 0; k < n; ++)
	{
		dest[i + k] = src[k];
		if (src[k] == '\0')

			k = n;
	}

	return (dest);
}

