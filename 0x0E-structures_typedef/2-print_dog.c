#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name != NULL)
		printf("%s\n", d->name);
	else
		puts("(nil)");

	printf("Age: %.6f\n", d->age);

	printf("Owner: ");
	if ((*d).name != NULL)
		printf("%s\n", d->owner);
	else
		puts("(nil)");
}
