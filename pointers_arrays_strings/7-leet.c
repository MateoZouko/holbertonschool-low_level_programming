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
		int b = 0;

		while (b < 5)
		{
		if (*str == remp[b][0] || *a == remp[b][0] - ('a' - 'A'))
		{
		*a = remp[b][1];
	break;
		}
		b++;
		}
		a++;
		str++;
	}
	printf("%s\n", str);
	printf("%s\n", str);

return (str);
}
