#include "main.h"

/**
 * _numbers - prints numbers from 0 to 9.
 * @numbers: integer to be determined.
 * Return: result.
*/
void print_numbers(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
		_putchar(number);
	_putchar('\n');
}
