#include "main.h"
#include <stdio.h>

char
*_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	char *newsrc = (char *)src;
	char *newdest = (char *)dest;

	while (i < n)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (newdest);
}
