#include "main.h"

/**
 * print_array - printse
 * @dest: string
 * @src: string
 * Return: copy string
 */
void print_array(int *dest, int *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
