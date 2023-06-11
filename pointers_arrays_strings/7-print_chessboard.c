#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of characters
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i, j;
	int aLen = sizeof(*a) / sizeof(*a[0]);

	for (i = 0; i < aLen; i++)
	{
		for (j = 0; j < aLen; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
