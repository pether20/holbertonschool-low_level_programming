#include "main.h"

/**
 * _atoi - printse
 * @s: string
 *
 * Return: value
 */
int _atoi(char *s)
{
	int sig = 1;
	unsigned int num = 0;
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sig *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			num = (num * 10) + (*(s + i) - '0');
		else if (num > 0)
			break;
		i++;
	}

	return (sig * num);
}
