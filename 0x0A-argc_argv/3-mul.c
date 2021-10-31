#include <stdio.h>
#include <stdlib.h>

/**
 * main - return first parameter
 * @argc: number
 * @argv: pointer to list
 * Return: success
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	exit(EXIT_SUCCESS);
}
