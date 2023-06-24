#include "main.h"
#include <stdio.h>

char
*cap_string(char *str)
{
	int i = 0;
	int c = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ';' || str[i] == ',' || str[i] == '.' || str[i] == '!' ||
			str[i] == '?' ||str[i] == '(' || str[i] == '"' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			c = 1;
		}
		else if (c && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			c = 0;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (str);
}
