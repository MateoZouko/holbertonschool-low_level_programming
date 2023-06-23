#include "main.h"
int
_atoi(char *s)
{
	int b = 1;
	int c = 0;

	while (*s)
	{
		if (*s == ' ')
		{
			s++;
				continue;
		}
		if (*s == '-')
		{
			c = -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		if (*s >= '0' && *s <= '9')
		{
			c = c * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (c * b);
}
