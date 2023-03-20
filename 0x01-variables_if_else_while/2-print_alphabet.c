#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - assign a random number to int n
 * each time it executes and prints it
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
putchar("");
return (0);
}
