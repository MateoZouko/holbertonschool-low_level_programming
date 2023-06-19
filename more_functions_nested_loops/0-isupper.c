#include "main.h"
/**
 * _isupper - check the code.
 * @c: letter.
 * Return: 1 if uppercase, if not 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
