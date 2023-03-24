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
	int i = 0;

	while (i <= 2)
	{
		int j = 0;
		while (j <= 3)
		{
			int k = 0;
			while (k <= 5)
			{
				int l = 0;
				while (l <= 9)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
