#include "main.h"

/**
 * _abs - print _putchar
 * @n: The inter to print
 *
 * Return: On success 1..
 */
int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n - 2 * n);
	}
}
