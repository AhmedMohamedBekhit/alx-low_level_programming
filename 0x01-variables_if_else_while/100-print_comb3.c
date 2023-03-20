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
int j = 1;
while (i < 9)
{
	while (j < 8){
		if (i != j)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
		j++;
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
}
putchar('\n');
return (0);
}
