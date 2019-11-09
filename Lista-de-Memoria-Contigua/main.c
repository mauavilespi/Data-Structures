//Aviles Piña Mauricio

#include "ListaContigua.h"

int main(){

	struct Lista *prueba;
	
	for (int i =1; i<=10; i++){
		prueba = agregar (prueba, i);
	}

	imprimir (prueba);

	printf ("Se encuentra el elemento 10: ");
	
	(buscarElemento (prueba, 10)) ? printf ("SI\n"): printf ("NO\n");

	printf ("Se encuentra el elemento 15: ");
	
	(buscarElemento (prueba, 15)) ? printf ("SI\n"): printf ("NO\n");




	borrarLista(prueba);

	
	return 0;
}
