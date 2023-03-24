#include "main.h"

/**
 * main - check the code for Holberton School students.
 * print_alphabet function 
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
