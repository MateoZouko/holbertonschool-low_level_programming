#include "main.h"
#include <stdio.h>

int
_sqrt_recursion(int n)
{
	int sqrt = _sqrt_recursion(n - 1);

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	if (sqrt == -1)
	{
		return (-1);
	}
	else
	{
		return (sqrt + 1);
	}
}
