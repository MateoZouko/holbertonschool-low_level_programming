#include "main.h"
#include <stdio.h>

char
*_strcpy(char *dest, const char *src)
{
	int c = 0;

	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
