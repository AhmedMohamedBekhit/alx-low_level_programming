#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -prints add two numbers
 * @n: print int n
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
}