#include "main.h"

/**
 *_isalpha - check alphabet lowercase or uppercase or not given parameter c
 * @c: if lowercase or uppercase return 1 else return 0
 *Return: Always 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
