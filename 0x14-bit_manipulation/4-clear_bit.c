#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Converted a binary number to an
 * @n: char
 * @index: index
 * Return: success 1 or fail -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_index = (sizeof(unsigned long int) * 8);

	if (index >= max_index)
		return (-1);

	mask = mask << index;
	mask = ~(mask);
	*n = *n & mask;
	return (1);

}
