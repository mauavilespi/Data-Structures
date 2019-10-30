#include "ListaContigua.h"

int main(){

	struct Lista *prueba;
	
	for (int i =1; i<=10; i++){
		prueba = agregar (prueba, i);
	}

	imprimir (prueba);
	return 0;
}
