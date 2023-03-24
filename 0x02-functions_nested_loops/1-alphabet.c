#include "main.h"

/**
 * main - check the code for Holberton School students.
 * print_alphabet - Not Entry point - function to print from a to z
 * Return: Always 0.
 * print_alphabet - prints the alphabet in lowercase
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
