#include "main.h"

/**
 * print_triangle - prints a square
 * @size: size
 * Return: Void
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (x >= (size - y))
				_putchar('#');
				else
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
