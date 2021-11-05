#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function add.
 * @a: integer.
 * @b: integer.
 *
 * Return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtraction.
 * @a: integer.
 * @b: integer.
 *
 * Return: value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function subtraction.
 * @a: integer.
 * @b: integer.
 *
 * Return: value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function division.
 * @a: integer.
 * @b: integer.
 *
 * Return: value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function modulo.
 * @a: integer.
 * @b: integer.
 *
 * Return: value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
