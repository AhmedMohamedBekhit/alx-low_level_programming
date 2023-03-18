#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10 ;
if (n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
if (n == 0)
	printf("Last digit of %d is %d and is 0\n", n , m);
if (n != 0 && n < 6 )
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
return (0);
}
