#include "main.h"
#include <stdio.h>
char
*_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	while (dest[l] < '\0')
	{
		l++;
	}
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}
