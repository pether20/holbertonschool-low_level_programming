#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- A new type describing a dog.
 * @array: The name of the dog.
 * @size: The age of the dog.
 * @action: funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
