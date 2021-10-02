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
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}


	putchar('\n');
	return (0);
}

