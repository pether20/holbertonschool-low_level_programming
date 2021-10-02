#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - prints the numbers 0-9e, followed by a new line
  *      .
  *
  * Return: Always 0.
  */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}


	putchar('\n');
	return (0);
}

