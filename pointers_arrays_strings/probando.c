#include <stdio.h>

int main(void)
{
	int a = 550;
	int *s;

	s = &a;

	printf("%d\n", *s);

	return (0);
}
