#include <stdio.h>
#include <stdlib.h>
/**
 * main - check for multiples of 3 and 5
 *
 * Return: 0 always
 */
int main(void)
{
	long int i = 0;
	long int sum = 0;
	long int x = 1;
	long int y = 2;

	while (i < 49)
	{
		printf("%ld, ", sum);
		sum = x + y;
		x = y;
		y = sum;
		i++;
	}
	printf("%ld, ", sum);
	printf("\n");
	return (0);
}
