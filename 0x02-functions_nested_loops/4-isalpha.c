#include "main.h"

/**
 * _isalpha - print _putchar
 * @c: The character to print
 *
 * Return: On success 1..
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
