#include "main.h"
#include <stdio.h>
void
print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b == n - 1)
			continue;
		printf(", ");
	}

printf("\n");
}
