#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -prints add two numbers
 * @n: print int n
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n < 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
