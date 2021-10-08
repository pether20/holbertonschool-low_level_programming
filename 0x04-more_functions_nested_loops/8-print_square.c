#include "main.h"

/**
 * print_square - prints a square
 * @size: size
 * Return: Void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y < size; y++)
		{
			for (x = 1; x <= size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
