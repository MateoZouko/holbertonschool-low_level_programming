#include "main.h"
/**
 * more_numbers - prototype.
 */
void more_numbers(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		c = '0';
		while (c <= 14)
		{
			_putchar (c);
			c++;
		}
		_putchar ('\n');
		i++;
	}
}
