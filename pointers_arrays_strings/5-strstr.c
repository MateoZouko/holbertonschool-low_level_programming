#include "main.h"
#include <stdio.h>

char
*_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*b && *a && *b == *a)
		{
			b++;
			a++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
