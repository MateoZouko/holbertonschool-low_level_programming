#include "main.h"
/**
 * _isupper - check the code.
 * @c: letter.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (0);
	else
		return (1);
}
