#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - return first parameter
 * @argc: number
 * @argv: pointer to list
 * Return: success
 */
int main(int argc, char **argv)
{

	int s = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[i]);

	}
	printf("%d\n", s);
	exit(EXIT_SUCCESS);
}
