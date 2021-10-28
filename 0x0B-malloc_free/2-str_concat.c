#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - create new array copy
 * @s1: string
 * @s2: string
 *
 * Return: new.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *new;

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}

	size = i + j + 1;
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		new[i++] = s2[j];

	new[size - 1] = '\0';
	return (new);
}
