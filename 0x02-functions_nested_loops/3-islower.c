#include "main.h"

/**
 *_islower - check alphabet lowercase or not given parameter c
 * @c: if lowercase return 1 else return 0
 *Return: Always 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
