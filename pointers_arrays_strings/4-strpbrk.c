#include "main.h"
#include <stdio.h>

char
*_strpbk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;
	while (*p)
	{
		if (*p == *s)
		{
			return (s);
		}
		p++;
		}
	s++;
	}
	return (NULL);
}
