//Aviles Piña Mauricio
//Estructuras de Datos
//1CV9

#include "ListaContigua.h"

int main(){

	struct Lista *prueba;
	
	for (int i =1; i<=10; i++){
		prueba = agregar (prueba, i);
	}

	imprimir (prueba);

	printf ("Posición elemento 10: %d \n", (buscarElemento (prueba, 10)));

	printf ("Posición elemento 15: %d \n", (buscarElemento (prueba, 15)));

	printf ("Eliminando el 6: \n");

	prueba = eliminarElemento(prueba, 6);
	
	imprimir(prueba);	

	printf ("Eliminando el 1: \n");

	prueba = eliminarElemento(prueba, 1);

	imprimir(prueba);	

	borrarLista(prueba);
	
	return 0;
}
