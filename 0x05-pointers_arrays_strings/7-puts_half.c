#include "main.h"

/**
 * puts_half - prints a string
 * @str: pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, half;
	char *tmp;

	tmp = str;
	while (*str != 0)
	{
	len++;
	str++;
	}
	str = tmp;
	half = len - len / 2;
	for (i = half; i < len; i++)
	_putchar(str[i]);
	_putchar('\n');
}
