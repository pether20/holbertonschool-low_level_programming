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
	int n = 97;
	int m = 122;

	while (n <= m)
	{
		putchar(n);
		n++;
		if (n == 123)
		{
		n = 65;
		m = 90;
		}

	}


	putchar('\n');
	return (0);
}

