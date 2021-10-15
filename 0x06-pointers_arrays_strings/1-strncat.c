#include "main.h"

/**
 * *_strncat - print concatenate of n bytes
 * @dest: string
 * @src: string
 * @n: integer
 * Return: concatenates string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	j++;

	for (i = 0; src[i]; i++)
	{
		if (i < n)
		dest[j++] = src[i];
	}

	return (dest);
}
