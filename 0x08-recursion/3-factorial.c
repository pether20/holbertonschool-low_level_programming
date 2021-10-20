#include "main.h"

/**
 * int factorial - factorial the number
 * @n: integer
 *
 * Return: Value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
