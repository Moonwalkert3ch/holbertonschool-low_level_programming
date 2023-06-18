#include "main.h"

/**
 * _isdigit - checks for numbers between 0 and 9.
 * @c: chartacer to be determined.
 * Return: 1 or 0.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
