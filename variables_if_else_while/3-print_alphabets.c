#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Prints alphabet in upper anc lower case
 * RETURN 0 always success
 *
*/

int main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
