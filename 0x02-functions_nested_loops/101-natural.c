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
	while (i < 1024)
	{
		printf("%i ", 3*i);
		printf("\n");
		printf("%i ", 5*i);
		printf("\n");
		i++;
	}
	return (0);
}
