#include "main.h"

/**
* print_alphabet_x10 - check the code
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
	i++;
	}
}
