#include <stdlib.h>
#include <stdio.h>

struct Pila{
	int dato;
	struct Pila *siguiente;
};

struct Pila *agregar (int n, struct Pila *tope){
	if(tope==NULL){
		struct Pila*tmp = malloc (sizeof(struct Pila));
		tmp ->dato = n;
		tmp ->siguiente = NULL;
	}
	
}


int main(){
	struct Pila *p1;
	p1=agregar(10,p1); 
	return 0;
}	
