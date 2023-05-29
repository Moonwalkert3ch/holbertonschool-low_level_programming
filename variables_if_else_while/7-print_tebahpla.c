#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Author: Rachael Bradford File: 7-print_tebahpla.c */

/**
 * main - Prints alphabet backwards in lower case
 *
 * Return: 0 always success.
*/
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
