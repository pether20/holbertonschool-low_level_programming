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

	while (dest[i])
	{
		while (src[j])
		{
			j++;
		}
		dest[j] = src[i];
		i++;
	}

	return (dest);
}
