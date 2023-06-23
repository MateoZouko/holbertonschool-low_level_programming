#include "main.h"
#include <stdio.h>

char
*_strcpy(char *dest, char *src)
{
	int c = *src;

	*dest = c;

	return(dest);
}
