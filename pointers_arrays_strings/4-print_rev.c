#include "main.h"

void
print_rev(char *s)
{
	int l = 0, i;

	while (s[i++])
		l++;

	for (i = l - 1; i >= 0; i--)
	_putchar(s[i]);

	_putchar('\n');
}
