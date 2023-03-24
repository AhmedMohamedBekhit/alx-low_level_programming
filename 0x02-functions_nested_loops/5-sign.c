#include "main.h"

/**
 * print_sign - check n greater than 0 or less 0 or not
 * @n: if n greater than 0 return 1
 * if n less than 0 return -1 if n equal 0 return 0
 * Return: return 0 or return 1 or return -1
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
