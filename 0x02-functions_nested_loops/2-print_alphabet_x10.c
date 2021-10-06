#include "main.h"

/**
 * print_alphabet_x10 - print _putchar
 *
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int m = 0;
	int n = 97;

	while (m <= 9)
	{
	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
	m++;
	}
}
