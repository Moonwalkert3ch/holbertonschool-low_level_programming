#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: size of the triangle.
 * Return: void
*/
void print_triangle(int size)
{
	int s, c;

	if (size <= 0)
		_putchar(10);

	for (s = 0; s < size; s++)
	{
	for (c = (size - 1); c >= 0; c--)
	{
	if (c <= s)
		_putchar(35);
	else
		_putchar(32);
	}
	_putchar('\n');
	}
}
