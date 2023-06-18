#include "main.h"

/**
 *_sqrt - determin square root of a num
 * @i: same as n
 * @j: iterate number
 * Return: 0 success or -1
*/
int _sqrt(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (_sqrt(i, j + 1));
}
/**
 * _sqrt_recursion - returns sq root of n
 * @n: number to determine
 * Return: 0 success or -1 error
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
