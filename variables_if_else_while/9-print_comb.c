#include <stdio.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
	int i, j;
    for (i = 0; i <= 9; i++)
    {
	    putchar(i + '0');
	for (j = i + 1; j <= 9; j++)
	{
		putchar('\t');
		putchar(j + '0');
	}
	
	putchar('\n');
    }
    
    return 0;
}


