#include "main.h"

/**
 * *_strcpy - printse
 * @dest: string
 * @src: string
 * Return: copy string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
