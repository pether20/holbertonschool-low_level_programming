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
	
	while (n <= 122)
	{
		putchar(n);
		n++;
		if (n == 101 || n == 113)
		{
		n++;
		}

	}


	putchar('\n');
	return (0);
}

