#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * description: followed by a new line.
 * Return: void
*/

void more_numbers(void)
{
	int number, c;

	for (number = 0; number < 10; number++)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
	{
	_putchar((c / 10) + '0');
	}
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
