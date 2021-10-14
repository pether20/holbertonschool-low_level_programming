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

	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
