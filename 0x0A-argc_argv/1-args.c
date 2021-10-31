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
	int i = *argv - *argv;

	printf("%d\n", argc + i - 1);
	exit(EXIT_SUCCESS);
}
