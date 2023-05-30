#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* File: 5-print_numbers.c  author: Rachael Bradford*/

/**
 * Main -Prints all single digit numbers of bsae 10.
 *
 * RETURN: ALWAYS 0 SUCCESS
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
printf("%d", i);
printf("\n");

return (0);
}
