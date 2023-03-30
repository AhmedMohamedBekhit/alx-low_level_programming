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
