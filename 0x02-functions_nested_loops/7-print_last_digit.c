#include "main.h"

/**
 * print_last_digit - print _putchar
 * @n: The inter to print
 *
 * Return: On success 1..
 */
int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}

	_putchar('0' + n);
	return (n);
}
