#include "main.h"
/**
 * _isalpha - check for alphaber character.
 * @c: the character to be checked.
 * Return: 1 if alphabetic character or 0 if otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
