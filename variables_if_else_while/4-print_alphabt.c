#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Author: Rachael Bradford File: 4-print.alphabt.c */

/**
 * Main - Prints alphabet in lowercase
 *
 * Return: Always 0 success
*/
int main(void)
{
char l = 'a';
while (l <= 'z')
{
if (l != 'q' && l != 'e')
putchar(l);
l++;
}
putchar('\n');
return (0);
}
