#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n); //Mientras n  >= a 98, resta de 1 en 1 e imprimi
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%i", n); //mientras n <= a 98, reduci de 1 en 1 e imprimi
			if (n != 98)
			{
				printf(", "); //Si no es 98: imprime , y espacio
			}
			n++;
		}
	}
	printf("\n");
}
