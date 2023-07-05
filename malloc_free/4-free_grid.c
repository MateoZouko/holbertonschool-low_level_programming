#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
free_grid(int **grid, int height)
{
	int i;

	/**
	* Utilizo un bucle para recorrer la matriz hasta
	* height -1 y libero la memoria asignada para
	* cada fila de la string
	*/
	for (i = 0; i < height; i++)
		free(grid[i]);

	/**
	* utilizo la funcion free para liberar la memoria
	* asignada al puntero grid para liberar la memoria
	* de la matriz bidimensional totalmente
	*/
	free(grid);
}
