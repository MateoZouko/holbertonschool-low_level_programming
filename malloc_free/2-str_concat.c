#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	char *p;
	int length1, length2, length;

	if (!s1 || !s2)
		return (NULL);

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	length = length1 + length2;

	p = malloc((length + 1) * sizeof(char));

	if (!p)
		return (NULL);

	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
