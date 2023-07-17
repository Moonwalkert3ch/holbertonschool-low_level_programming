#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: the converted number on success,  or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	signed int count = 0, convNum = 0;


	if (!b)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		convNum <<= 1;

		if (b[count] & 1)
		{convNum += 1;
		}
		count += 1;
	}
	return (convNum);
}
