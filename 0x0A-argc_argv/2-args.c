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
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	exit(EXIT_SUCCESS);
}
