#include "main.h"

/**
 * print_sign - check n greater than 0 or less 0 or not 
 *
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
