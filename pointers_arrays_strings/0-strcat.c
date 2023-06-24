#include "main.h"
#include <stdio.h>

char
*_strcat(char *dest, char *src)
{
	int a;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
