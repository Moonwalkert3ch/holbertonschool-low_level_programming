#include "main.h"

/**
 * factorial - returns the factorial of a num.
 * @n: number to be factored
 * Return: 0 success,-1 for error
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}


