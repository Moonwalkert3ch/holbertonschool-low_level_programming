#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Checks if its a number.
 * void is null value
 *
 * Print if a number is positive, negative, or zero.
 * Return: Zero value
*/

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if ( n == 0 )
	{
		printf("%s is zero\n", n);
	}
	else ( n < 0);
	{
		printf("%d is negative\n", n);
	}
		return (0);
}
