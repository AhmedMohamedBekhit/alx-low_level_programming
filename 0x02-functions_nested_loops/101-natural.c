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
		sum += i*3 |  i*5;
		i++;
	}
	printf("%i", sum);
	return (0);
}
