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

int binary_search(int *array, size_t size, int value, long unsigned int left, long unsigned int right)
{
if (array == NULL)
{
return (-1);
}

right = size - 1;
long unsigned int n;

while (left <= right)
{
	int middle = left + (right - left) / 2;

	printf("Searching in array: ");

for (n = left; n <= right; n++)
{
printf("%d\n", array[n]);
}
if (array[middle] == value)
{
return (middle);
}
else if (array[middle] < value)
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
