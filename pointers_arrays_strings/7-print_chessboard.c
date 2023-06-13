#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of characters
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; i++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
