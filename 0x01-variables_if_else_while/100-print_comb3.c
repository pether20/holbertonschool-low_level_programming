#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - prints the alphabet in lowercase, followed by a new line
  *      .
  *
  * Return: Always 0.
  */
int main(void)
{
	int n = 48;
	int m = 48;

	while (n <= 56)
	{
		m = n + 1;

		while (m <= 57)
		{
		
		putchar(n);
		putchar(m);

		if (n == 56 && m == 57)
		break;

		m++;
		putchar(44);
		putchar(' ');
		
		}

		n++;

	}


	putchar('\n');
	return (0);
}

