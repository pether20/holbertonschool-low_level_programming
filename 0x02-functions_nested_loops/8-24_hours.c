#include "main.h"

/**
 * jack_bauer - print _putcha
 *
 *
 * Return: On success 1..
 */
void jack_bauer(void)
{
	int m, n, a, b;
	int x = 9;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= x; n++)
		{

		for (b = 0; b <= 5; b++)
		{

		for (a = 0; a <= 9; a++)
		{

		_putchar('0' + m);
		_putchar('0' + n);
		_putchar(':');
		_putchar('0' + b);
		_putchar('0' + a);
		_putchar('\n');
		}
		a = 0;
		}
		b = 0;
		if (m == 2)
		x = 3;
		}
		n = 0;
	}

}
