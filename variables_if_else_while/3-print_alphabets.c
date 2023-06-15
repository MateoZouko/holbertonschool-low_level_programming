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
                putchar(character);
        }
	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}

        putchar('\n');

        return (0);
}
