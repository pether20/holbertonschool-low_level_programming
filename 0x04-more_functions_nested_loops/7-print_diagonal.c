#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: int value
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;

	if (n < 0)
		_putchar('\n');
	else
	{
	for (x = 0; x <=  n; x++)
	{
		for (y = 1; y < x; y++)
			_putchar(92);
		_putchar(' ');
		_putchar('\n');
	}

	}
}
