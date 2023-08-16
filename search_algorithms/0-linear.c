#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for desired value in an
 *  array of integers using linear search
 * @size: number of elements in the array
 * @value: value to search for
*/

int linear_search(int *array, size_t size, int value)
{
size_t n;

if (array == NULL)
{
return (-1);
}
for ( n = 0; n < size; n++)
{
printf("Value checked array[%ld] = [%d]\n", n, array[n]);

if (array[n] == value)
{
return (n);
}
}
return (-1);
}
