#include "main.h"

/**
 * *_strcat - printse
 * @dest: string
 * @src: string
 * Return: concatenates string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	j++;
	
	for (i = 0; src[i]; i++)
	dest[j++] = src[i];

	return (dest);
}
