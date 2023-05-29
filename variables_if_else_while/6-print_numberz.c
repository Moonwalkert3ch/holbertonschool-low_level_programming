/*
 * File: 5-print_numberz.c
 * author: Rachael Bradford
*/

#include <stdio.h>

/*
 * Main- Prints all single digits to 10.
 * RETURN 0 always success.
*/

int main(void)
{
	char i;

	for (i = '0'; i <= 10; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
