#include "main.h"
/**
 * jack_bauer - display time 
 * @i: increase to 2
 * @j: increase to 3
 * @k: increase to 5
 * @l: increase to 9
 */

void jack_bauer(void)
{
	for (int i = 0 ; i <= 2 ; i++)
	{
		for (int j = 0 ; j <= 3 ; j++)
		{
			for (int k = 0 ; k <= 5 ; k++)
			{
				for (int l = 0 ; l <= 9 ; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
				}
			}
		}
	}
}
