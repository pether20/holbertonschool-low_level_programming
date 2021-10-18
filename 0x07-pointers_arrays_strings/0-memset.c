#include "main"

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
	unsigned char *memory = s;

	for (i = 0; i < n; i++)
	{
		memory[i] = b;
	}

	return (memory);
}
