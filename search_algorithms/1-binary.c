#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - function that uses binary search algorithms
 * @array: points to first element in the array
 * @size: number of elements in array
 * @value: value to search for
 * Description: searches for a value in a sorted array of integers
 * Return: index where value is found
*/

int binary_search(int *array, size_t size, int value)
{
	int n;
	size_t middle;
	int left = 0;
	int right = size - 1;

if (array == NULL)
{
return (-1);
}

while (left <= right)
{
middle = left + (right - left) / 2;

for (n = left; n <= right; n++)
{
printf("Searching in array: %d\n", array[n]);
}
if (array[middle] == value)
{
if ((middle == 0 || array[middle - 1] != value)
	       && (middle == size - 1 || array[middle + 1] != value))
return (middle);
}
else if (middle == 0 || array[middle - 1] != value)
{
left = middle + 1;
}
else
{
right = middle - 1;
}
if (array[middle] < value)
{
left = middle + 1;
}
else
{
right = middle - 1;
}
}
return (-1);
}
