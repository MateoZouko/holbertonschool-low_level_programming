#include "main.h"
int
_atoi(char *s)
{
	int a;
	int b, c;

	b = 0;
	c = -1;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			c *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (b < 0)
				b = (b * 10) - (s[a] - '0');
			else
				b = (s[a] - '0') * -1;
			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
		}
	}
	if (c < 0)
		b *= -1;
	return (b);
}
