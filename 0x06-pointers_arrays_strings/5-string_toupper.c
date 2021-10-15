#include "main.h"

/**
 * string_toupper - change  string
 * @s: pointer
 *
 * Return: pointer to array of chars, with lowecase chars replaced by uppers
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
		i++;
	}
	return (s);
}
