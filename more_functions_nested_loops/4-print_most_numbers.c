#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the digits 0-9.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
		num++;
	}
	_putchar ('\n');
}
