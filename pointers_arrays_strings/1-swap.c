#include "main.h"
#include <stdio.h>

void
swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;

	int c, d;

	c = 42;
	d = 98;
	*a = c;
	*b = d;
}
