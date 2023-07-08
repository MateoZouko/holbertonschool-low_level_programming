#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int str_length = len1 + n;
	char *str;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (str_length + 1));

	if (str == NULL)
		return (NULL);

	strncpy(str, s1, len1);
	strncpy(str + len1, s2, n);
	str[str_length] = '\0';

	return (str);
}
