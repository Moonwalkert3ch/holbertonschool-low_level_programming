#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: points the result to..
 * @src: appends to the dest.
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int rows = 0, j = 0;

	for (rows = 0; dest[rows] != '\0'; rows++)
	;

	for (j = 0; src[j] != '\0'; j++)
	{
	dest[rows] = src[j];
	rows++;
	}

	dest[rows] = '\0';
	return (dest);
}
