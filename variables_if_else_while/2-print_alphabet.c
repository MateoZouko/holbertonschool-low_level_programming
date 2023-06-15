#include<stdio.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
	char caracter;
	caracter = 'a';

	while (caracter <= 'z')
	{
	putchar("%c \n", caracter);
	if (caracter == 'n')
	{
		putchar("ñ \n");
	}
	caracter++;
	}
	return (0);
}
