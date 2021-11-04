#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - liberate a new dog
 * @d: struct dog
 *
 * Return: struct free
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
