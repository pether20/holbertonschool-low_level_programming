#include "main.h"

/**
 * jack_bauer - print _putchar
 * @n: The inter to print
 *
 * Return: On success 1..
 */
void jack_bauer(void)
{
	int m = 0;
	int n = 0;
	int b = 0;
	int a = 0;
	int x = 9;

	while (m <= 2)
	{
		while (n <= x)
		{

		while (b <= 5)
		{

		while (a <= 9)
		{

		_putchar('0' + m);
		_putchar('0' + n);
		_putchar(':');
		_putchar('0' + b);
		_putchar('0' + a);
		_putchar('\n');
		a++;
		}

		b++;
		a = 0;
		}

		n++;
		b = 0;
		}

		m++;
		if (m == 2)
		x = 3;

		n = 0;

	}

}
