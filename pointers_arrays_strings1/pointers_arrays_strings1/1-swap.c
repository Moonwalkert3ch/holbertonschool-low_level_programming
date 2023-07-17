#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 * Return: Void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
