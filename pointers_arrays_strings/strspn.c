#include "main.h"
#include <stdio.h>

unsigned int
_strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found, i;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
