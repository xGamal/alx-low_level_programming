#include "main.h"
#include <stdio.h>

/**
 * print_sign - Checks if n is positive, zero, or negative.
 * @n: The value to be checked.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
