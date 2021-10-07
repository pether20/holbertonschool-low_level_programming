#include "main.h"

/**
 * times_table - print _putcha
 *
 *
 * Return: On success 1..
 */
void times_table(void)
{
	int n, r;
	int x;
	int d1, d2;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 9; n++)
		{

		r = n * x;
		d1 = r / 10;
		d2 = r % 10;
		_putchar(' ');
		_putchar('0' + d1);
		_putchar('0' + d2);
		if (n <= 8)
		_putchar(',');
		if (n == 9)
		_putchar('\n');
		}

	}

}
