#include<stdio.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character != 'q' && character != 'e')
		{
			putchar(character);
		}
	}

	putchar('\n');

	return (0);
}
