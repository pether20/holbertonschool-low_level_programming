#include "main.h"

/**
 * _strlen_recursion - prints a leng string
 * @s: string
 *
 * Return: Value
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
