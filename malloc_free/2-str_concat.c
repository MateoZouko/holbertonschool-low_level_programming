#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	char *p;
	int length, lengthtotal;

	if (!s1 || !s2)
		return (NULL);

	while (s1[length] != '\0' && s2[length] != '\0')
	{
		length++;
	}

	lengthtotal = length + 1;

	p = malloc((lengthtotal) * sizeof(char));

	if (!p)
		return (NULL);

	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
