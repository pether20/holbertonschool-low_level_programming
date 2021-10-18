#include "main.h"

/**
 * *_memset - constant byte
 * @dest: character
 * @src: character
 * @n: int long
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *memory = dest;

	for (i = 0; i < n; i++)
	{
		memory[i] = src[i];
	}

	return (memory);
}
