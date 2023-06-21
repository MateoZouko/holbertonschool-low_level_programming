#include "main.h"
#include <stdio.h>

void
swap_int(int *a, int *b)
{
	int c, d;

	*a = 98;
	*b = 42;
	c = 42;
	d = 98;
	*a = c;
	*b = d;
}
