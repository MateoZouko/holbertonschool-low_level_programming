#include "main.h"
#include <stdio.h>

void
rev_string(char *s)
{
	if (s == NULL)
	{
		return;
	}

	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	int z = 0;
	int e = l - 1;

	while (z < e)
	{
		char t = s[z];

		s[z] = s[e];
		s[e] = t;

		z++;
		e--;
	}
}
