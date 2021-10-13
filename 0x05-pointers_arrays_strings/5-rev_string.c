#include "main.h"

/**
 * rev_string - print string
 * @s: pointer char
 *
 * Return: Value
 */
void rev_string(char *s)
{
	int i = 0;
	int ln;
	char tm;

	for (ln = 0; s[ln]; ln++)
	;
	len--;

	while (i < ln)
	{
		tm = s[i];
		s[i] = s[len];
		s[len] = tm;
		i++;
		len--;
	}

}
