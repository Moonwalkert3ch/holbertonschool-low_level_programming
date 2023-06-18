#include "main.h"

/**
 * _pow_recursion - returns value of x power
 * @x: value to return
 * @y: to the power of x
 * Return: -1 if lower or 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
