#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/*
* main - assign a random number to int n
* each time it executes and prints it
* Return: Always 0 (Success) space made nervaus
* kosom al space main  and return 0
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
	printf("%d is negative\n", n);
return (0);
}
