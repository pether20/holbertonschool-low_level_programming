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
	argc = 0;
	printf("%s\n", *(argv + argc));
	exit(EXIT_SUCCESS);
}
