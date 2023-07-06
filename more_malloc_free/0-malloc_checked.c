#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
