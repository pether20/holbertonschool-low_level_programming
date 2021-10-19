#include "main.h"

/**
 * *_memset - constant byte
 * @s: character
 * @b: character
 * @n: int long
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory;

	memory = s;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (memory);
}
