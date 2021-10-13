#include "main.h"

/**
 * puts2 - prints string
 * @s : pointer
 *
 * Return: void
 **/
void puts2(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	if (*s != 0)
	s++;
	}
	_putchar('\n');
}
