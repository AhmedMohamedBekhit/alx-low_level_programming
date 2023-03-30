#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum of digit devid 3 or 5
 * Return: always (0)
 * @i: increase value less than 1024
 * @sum: addition operation
 **/

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%i", sum);
	printf("\n");
	return (0);
}
