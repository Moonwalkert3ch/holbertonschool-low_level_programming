#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: a string
 * @s2: a string
 * Return: if strings are equal 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
	}
	return (0);
}
