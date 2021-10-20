#include "main.h"

/**
 * _pow_recursion - factorial the number
 * @x: integer base
 * @y: integer exponent
 * Return: Value
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y > 0)
		pow = (x * _pow_recursion(x, y - 1));

	return (pow);
}
