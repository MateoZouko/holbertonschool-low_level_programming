#include "main.h"
#include <stdio.h>

char
*_strcpy(char *dest, const char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
