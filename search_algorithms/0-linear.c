#include "search_algos.h"

/**
 * linear_search - searches for desired value in an
 *  array of integers using linear search
 * @size: number of elements in the array
 * @value: value to search for
*/

int linear_search(int *array, size_t size, int value)
{
	int n;

if (array == NULL || array[n] != value)
{
return (-1);
}
for (int n = 0; n < size, n++)
{
printf("Value checked array[%d] = [%d]\n", n, array[n]);

if (array[n] == value)
{
return (n);
}
}
}
