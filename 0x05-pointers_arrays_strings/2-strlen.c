#include "main.h"

/**
 * int _strlen - leng string
 * @s: pointer char
 *
 * Return: Value
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
