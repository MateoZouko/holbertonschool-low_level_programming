# include "main.h"
# include <stdio.h>
# include <stdlib.h>

char
*create_array(unsigned int size, char c)

	/**
	* Declaro la funcion con un tipo de retorno char* y dos
	* parametros que representan el tamano del array (size) y 'c'
	* representa el caracter de inicializacion del array.
	*/

{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	/**
	 * Verifico si size es cero, si lo es retorno NULL indicando
	 * que no se puede crear un array vacio
	 */

	array = malloc(sizeof(char) * size); /*Asigno memoria para el array*/
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c; /*Inicializo cada elemento del array con el char c*/
	}
	return (array); /*Retorna el puntero al array*/
}

int
main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	/**
	 * LLamo a funcion anterior (create_array) para crear un array de
	 * 98 caracteres 'H'
	 */
	if (buffer == NULL)
	{
		printf("Failed to allocate memory\n"); /*Imprime si malloc falla*/
		return (1);
	}

	free(buffer); /*Libera la memoria asignada al array*/

	return (0);
}
