#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A new type describing a dog.
 * @name: The name of the dog.
 * @f: The age of the dog.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
