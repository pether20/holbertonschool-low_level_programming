#include "main.h"

/**
 * swap_int - change value n
 * @a: pointer one
 * @b: pointer two
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
