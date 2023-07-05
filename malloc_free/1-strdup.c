#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char
*strdup(char *str)
{
	int i;
	char *dup;
	int length = 0;

	if (str == NULL)
		return (NULL);
	/*Verifico si str es nulo*/

	while (str[length] != '\0')
	{
		length++;
	}
	/*calculo la longitud de la cadena contando los caracteres*/

	dup = malloc((length + 1) * sizeof(char));
	/**
	 * Asigno la memoria dinamica sumando el str +1 que
	 * representa el caracter nulo
	 */
	if (dup == NULL)
	{
		return (NULL);
	}
	/*Verifico si la asignacion de memoria fue exitosa*/

	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	/*Copio el contenido de la string str en la el string dup*/

	dup[length] = '\0'; /*le agrego el caracter nulo al final de la string*/

	return (dup);
}
