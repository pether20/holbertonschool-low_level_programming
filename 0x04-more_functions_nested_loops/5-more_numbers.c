#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
		}
	_putchar('\n');
	}
}
