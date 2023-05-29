/*
 * File: 5-print_numberz.c
 * author: Rachael Bradford
*/

#include <stdio.h>

/*
 * Main- Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= 9; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
