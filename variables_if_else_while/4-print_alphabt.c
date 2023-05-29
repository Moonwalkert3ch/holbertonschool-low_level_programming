/*
 * File: 4-print_alphabt.c
 * author: Rachael Bradford
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** Main - Prints alphabets in lowercase except q and e.
 * RETURN -0 always SUCCESS
*/

int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';
	
	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != e && i != q)
	putchar(i);
	}

	putchar('\n');
	return (0);
}
