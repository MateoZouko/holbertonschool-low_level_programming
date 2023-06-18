#include "main.h"

/**
 * jack_bauer - print minutes.
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hora, minutos;

	for (hora = 0; hora <= 23; hora++)
	{

		for (minutos = 0; minutos <= 59; minutos++)
		{
			_putchar('0' + hora / 10);
			_putchar('0' + hora % 10);
			_putchar(':');
			_putchar('0' + minutos / 10);
			_putchar('0' + minutos % 10);
			_putchar('\n');
		}
	}
}
