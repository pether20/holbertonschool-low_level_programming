#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array with character
 * @size: size
 * @c: The character
 *
 * Return: On success 1.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
