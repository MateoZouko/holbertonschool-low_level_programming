#include <stdio.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
		putchar(i != 8 ? ',' : ',');
		putchar(i != 8 ? ' ' : ' ');
	}

	}

	return 0;
}


