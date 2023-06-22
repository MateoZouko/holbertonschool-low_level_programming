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
	int z, e;
	char t;

	while (s[l] != '\0')
	{
		l++;
	}

	z = 0;

	e = l - 1;

	while (z < e)
	{
		t = s[z];
		s[z] = s[e];
		s[e] = t;

		z++;
		e--;
	}
}
