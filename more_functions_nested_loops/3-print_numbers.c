#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the digits 0-9.
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar ('\n');
}
