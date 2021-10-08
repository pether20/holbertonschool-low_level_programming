#include "main.h"

/**
 * most_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a;

	for (i = 0; a < 10; a++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar('0' + (a / 10));
			_putchar('0' + (a % 10))
		}
	_putchar('\n');
	}
}
