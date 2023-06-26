#include "main.h"
#include <stdio.h>

void
print_diagsums(int *a, int size)
{
	int c = 0;
	int b = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		c += *(a + i * size + i);
		b += *(a + i * size + (size - 1 - i));
	}
	printf("%d\n", c);
	printf("%d\n", b);
}
