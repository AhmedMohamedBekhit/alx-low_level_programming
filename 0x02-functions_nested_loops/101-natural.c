#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 **/

int main (void)
{
	int i = 0;
	int sum = 0;
	while (i < 1024)
	{
		sum += i*5 || i*3;
		i++;
	}
	printf("%i", sum);
	printf("\n");
	return (0);
}
