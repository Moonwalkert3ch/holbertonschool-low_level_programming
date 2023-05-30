#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Author: Rachael Bradford File: 9-print_comb.c */

/**
 * main - Prints all possible combinations of single digit numbers.
 *
 * Return: Always 0 success
*/
int main(void)
{
int n = 48;
while (n >= 48 && n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
