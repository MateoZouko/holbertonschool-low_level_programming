#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int **TwoDim;/*Puntero a la matriz bidimensional*/
	int height_i, width_i;/*Indices para bucles*/

	/*Verifico si el ancho o la altura <= 0*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*Asigno memoria para un array de punteros*/
	TwoDim = malloc(sizeof(int *) * height);

	/*Verifico si se asigno la memoria correctamente*/
	if (TwoDim == NULL)
		return (NULL);

	/*Inicializo cada fila de la matriz bidimensional*/
	for (height_i = 0; height_i < height; height_i++)
	{
/*Asigno memoria para un array de enteros*/
		TwoDim[height_i] = malloc(sizeof(int) * width);

		/*Verifico si se asigno correctamente la memoria*/
		if (TwoDim[height_i] == NULL)
		{
	/*Si no se pudo asignar, libera asignaciones previas*/
			for (; height_i >= 0; height_i--)
				free(TwoDim[height_i]);

			free(TwoDim);
			return (NULL);
		}
	}

	/*Inicio cada elemento de la matriz bidimensional en 0*/
	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			TwoDim[height_i][width_i] = 0;
	}
/*Retorno el puntero a la matriz bidimensional*/
	return (TwoDim);
}
