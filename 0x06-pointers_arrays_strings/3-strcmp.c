#include "main.h"

/**
 * _strcmp - print value comparation
 * @s1: string
 * @s2: string
 *
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int l1 = 0;
	int l2 = 0;
	int val;

	while (s1[i++])
		l1++;
	while (s2[j++])
		l2++;
	if (l1 > l2)
		val = 15;
	else if (l1 < l2)
		val = -15;
	else if (*s1 == *s2)
		val = 0;

	return (val);
}
