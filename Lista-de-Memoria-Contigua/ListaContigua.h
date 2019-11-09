//Aviles Piña Mauricio

#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int *datos;//Arreglo dinámico
	int n;//Tamaño arreglo dinámico
	int *fin;//Dirección de memoria del final
	int sig; //Cantidad de datos
};

void aumentar (struct Lista *l1);
struct Lista *agregar (struct Lista *l1, int dato);
void imprimir (struct Lista *l1);
void borrarLista (struct Lista *l1);
int buscarElemento (struct Lista *l1, int abuscar);
struct Lista*eliminarElemento (struct Lista *l1, int aeliminar);