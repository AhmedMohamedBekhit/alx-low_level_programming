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
char c2 = 'A';
while (c2 <= 'Z'){
	putchar(c2);
	c2++;
}
putchar('\n');
return (0);
}
