#include "main.h"

/**
 * _puts - print string
 * @str: pointer char
 *
 * Return: Value
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
