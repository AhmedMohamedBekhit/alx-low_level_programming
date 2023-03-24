#include "main.h"

/**
 * print_last_digit - print last digit by modules
 * @i: i equal i mod 10
 * Return: return i
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = (-1 * (i % 10));
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = i % 10;
		_putchar(i + '0');
		return (i);
	}
}
