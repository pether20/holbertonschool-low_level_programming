#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: 1 if everything is fine otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);
		binary = binary << 1;
		if (*b == 49)
			binary = binary ^ 1;
		b++;
	}
	return (binary);
}
