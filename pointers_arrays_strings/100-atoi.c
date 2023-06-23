#include "main.h"
int
_atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = -1;
	int d = 0;

	while (s[b] != '\0' && d == 0)
	{
		if (s[b] == '-')
			c *= -1;

		while (s[b] >= '0' && s[b] <= '9' && d == 0)
		{
			a = (a * 10 + (s[b] - 48));
			if (!(s[b + 1] >= '0' && s[b + 1] <= '9'))
				d = 1;
			b++;
		}
		b++;
	}
	return (a * c);
}
