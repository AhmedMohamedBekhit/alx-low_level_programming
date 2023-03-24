#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
