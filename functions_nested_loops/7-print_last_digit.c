#include "main.h"
/**
 * print_last_digit - check the code
 * @n: number.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv);
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv);
		return (nv);
	}
}
