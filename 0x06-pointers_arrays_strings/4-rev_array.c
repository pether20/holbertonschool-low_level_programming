#include "main.h"

/**
 * reverse_array -  revert string
 * @a: pointer s
 * @n: int
 * Return: *a invert
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
