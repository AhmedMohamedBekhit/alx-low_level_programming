#include <stdio.h>
#include <stdlib.h>
/**
 * main - check for multiples of 3 and 5
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	int sum = 0;
	int x = 1;
	int y = 2;

	while (i < 49)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%i, ", sum);
		i++;
	}
	printf("\n");
	return (0);
}
