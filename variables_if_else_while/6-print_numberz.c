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
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}