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

	while (n <= 57)
	{
		putchar(n);

		if (n == 57)
		break;

		putchar(44);
		putchar(' ');
		n++;

	}


	putchar('\n');
	return (0);
}

