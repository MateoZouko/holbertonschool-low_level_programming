#include "main.h"
/**
 * more_numbers - prototype.
 */
void more_numbers(void)
{
	int i;
	int c = 0;

	for (i = 0; i < 10; i++)
	{
		while (c < 15)
		{
			if (c < 15)
				_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			c++;
		}
		 c = 0;
		 _putchar('\n');
	}
}
