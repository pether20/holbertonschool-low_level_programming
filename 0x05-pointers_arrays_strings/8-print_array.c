#include "holberton.h"
#include <stdio.h>
/**
 * print_array - printse
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int len = 0;
	int i;
	int *tmp;

	tmp = a;
	while (*a != 0)
	{
		len++;
		a++;
	}
	a = tmp;
	if (n > len)
		n = len;
	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (!(i + 1 == n))
		printf(", ");
		else
		printf("\n");
	}
}
