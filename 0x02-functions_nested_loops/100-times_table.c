#include "main.h"
/**
 * @i: to increase
 * print_times_table - print time table
 * @n: to increase n
 **/
void print_times_table(int n)
{
	n = n + 1;
	if (!((n < 0) || (n > 15)))
	{
		int i = 0;
		while (i < n)
		{
			int j = 0;
			while (j < n)
			{
				if (n == 0)
				{
					_putchar(i*j);
				}
				else
				{
					_putchar(i*n + '0');
					_putchar(',');
					_putchar(' ');
				}
				i++;
			}
			j++;
		}
	}
}
