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
int i = 0;
while (i < 10)
{
	putchar(i + '0');
	i++;
}
printf("\n");
return (0);
}
