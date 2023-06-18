#include "main.h"
#include <stdio.h>

/**
 * add - function
 *@a: number to add to b.
 *@b: number to add to a.
 * Return: Always 0.
 */
int add(int a, int b)
{
	int c;

	c = add(a, b);
	printf("%i\n", c);
	return (0);
}
