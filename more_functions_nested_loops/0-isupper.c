#include "main.h"
/**
 * _isupper - check the code.
 * @c: letter.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 96 && c < 123)
		return (0);
	else
		return (1);
}
