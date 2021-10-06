#include "main.h"

/**
 * print_alphabet - print _putchar
 *
 *
 * Return: always 0.
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
