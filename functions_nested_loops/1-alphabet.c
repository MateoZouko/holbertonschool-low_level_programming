#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* print_alphabet - check the code
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar ('a' + i);
	}

	_putchar ('\n');

		return;
}
