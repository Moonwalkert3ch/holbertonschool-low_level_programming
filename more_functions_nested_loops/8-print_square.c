#include "main.h"

/**
 * print_square - prints a square followed by new line
 * @size: size of the square.
 * Return: void.
*/
void print_square(int size)
{
	int length, width;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (length = 0; length < size; length++)
	{
	for (width = 0; width < size; width++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
