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



int main(){

	struct Lista *prueba;
	
	for (int i =1; i<=10; i++){
		prueba = agregar (prueba, i);
	}

	imprimir (prueba);
	return 0;
}



void aumentar (struct Lista *l1){
	int *tmp= malloc ((l1->n)*2*sizeof(int));
	
	for (int i=0; i<l1->sig; i++){
	*(tmp+i) = *(l1->datos+i);
	}

	l1->datos = tmp;
	l1->n =(l1->n)*2;
	l1->fin = l1->datos+(l1->n-1);
}


struct Lista *agregar (struct Lista *l1, int dato){
	if (l1==NULL){
		l1=malloc (sizeof(struct Lista));
		l1->datos = malloc (sizeof(int));
		*(l1->datos)=dato;
		l1->n=1;
		l1->fin = l1->datos;
		l1->sig = 1;
		return l1;

	} else if (l1->sig  == l1->n){
		aumentar (l1);
		*(l1->datos + l1->sig)=dato;
		l1->sig = l1->sig +1;
		return l1;
	} else{
		*(l1->datos + l1->sig) =dato; 
		l1->sig = l1->sig +1;
		return l1;
	}
}	


void imprimir (struct Lista *l1){
	if (l1->datos == l1->fin)
		printf ("%d \n",(int) *(l1->datos));
	else{
		for (int *aux = l1->datos; aux<l1->datos+l1->sig; aux++){
			printf ("%d ", (int)*aux);
		}
	printf ("\n");
}
}

