#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter, 0 if not.
 * @c: char type
 * Return: 1 if letter, 0 if not.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
