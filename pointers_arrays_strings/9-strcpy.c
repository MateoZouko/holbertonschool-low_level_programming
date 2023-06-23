#include "main.h"
#include <stdio.h>

char
*_strcpy(char *dest, char *src)
{
	_strcpy(src, dest);
	printf("%s", dest);
}
