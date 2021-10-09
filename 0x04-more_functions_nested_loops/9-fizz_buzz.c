#include <stdio.h>

/**
 * main - Print number from the 0 at 100.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
		{
			if (i % 3 == 0)
			printf("Fizz ");
			else if (i % 5 == 0)
			{
				if (i < 100)
					printf("Buzz ");
				else if (i == 100)
					printf("Buzz\n");
			}
			else
				printf("%d ", i);
		}

	}
	return (0);
}
