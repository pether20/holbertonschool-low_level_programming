#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A new type describing a dog.
 * @array: The name of the dog.
 * @size: The age of the dog.
 * @cmp: funtion pointer
 * Return: value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}
