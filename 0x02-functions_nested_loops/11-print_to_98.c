#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print _putcha
 * @n: int
 *
 * Return: On success 1..
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{

		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
			else
				printf("\n");
		}



	}
	else
	{
		for (x = n; x >= 98; x--)
		{
		printf("%d", x);
		if (x != 98)
			printf(", ");
		else
			printf("\n");
		}
	}

}
