#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* File: 4-print_alphabt.c author: Rachael Bradford */

/**
 *  Main - Prints alphabets in lowercase except q and e.
 *
 * Return: always 0 SUCCESS
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
