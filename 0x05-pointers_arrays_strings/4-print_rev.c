#include "main.h"

/**
 * print_rev - print string
 * @s: pointer char
 *
 * Return: Value
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	i--;
	s--;
	while (i >= 0)
	{
		i--;
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
