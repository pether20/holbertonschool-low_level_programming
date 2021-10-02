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
	int m = 57;

	while (n <= m)
	{
		putchar(n);
		n++;
		if (n == 58)
		{
		n = 97;
		m = 102;
		}

	}


	putchar('\n');
	return (0);
}

