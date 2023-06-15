#include <stdio.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
int i;

for (i = 0; i <= 15; i++)
{
	if (i < 10)
		putchar(i + '0');
	else
		putchar(i - 10 + 'a');
}

putchar('\n');

return (0);
}
