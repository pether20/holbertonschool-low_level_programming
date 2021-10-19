#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums diagonals
 * @a: string
 * @size: size
 *
 * Return: pointer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int dia1 = 0;
	int dia2 = 0;

	for (i = 0; i < size; i++)
	{
		dia1 += *(a + (size * i) + i);
		dia2 += *(a + (size - 1) * (i + 1));

	}
	printf("%d, %d\n", dia1, dia2);
}
