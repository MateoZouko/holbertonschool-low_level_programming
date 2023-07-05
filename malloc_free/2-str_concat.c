#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char
*str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, conc_ind, length;

	conc_ind = 0;
	length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[conc_ind++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[conc_ind++] = s2[i];

	return (concat_str);
}
