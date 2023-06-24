#include "main.h"
#include <stdio.h>

char
*leet(char *str)
{
	char *a = str;
	char remp[5][2] = {{'a', '4'}, {'e', '3'},
		{'o', '0'}, {'t', '7'}, {'l', '1'}};

	while (*str != '\0')
	{
		char c = *a;
		int i;

		for (i = 0; i < 5; i++)
		{
		if (c == remp[i][0] || c == remp[i][0] - ('a' - 'A'))
		{
		*a = remp[i][1];
	break;
		}
		}
		a++;
	}
return (str);
}
