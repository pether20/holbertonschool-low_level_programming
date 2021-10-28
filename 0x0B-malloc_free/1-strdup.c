#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - create new array copy
 * @str: string
 *
 *
 * Return: new.
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *new;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{}

	size += 1;
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];

	new[size - 1] = '\0';
	return (new);
}
