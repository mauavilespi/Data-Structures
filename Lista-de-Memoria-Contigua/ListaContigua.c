//Aviles Piña Mauricio

#include "ListaContigua.h"

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


void borrarLista (struct Lista *l1){
	free(l1);
}


int buscarElemento (struct Lista *l1, int abuscar){
	int aux = 0;
	for (int*apuntador = l1->datos; apuntador <= l1->fin; apuntador++){
		if (*(apuntador)==abuscar)
			return aux;
		else
			aux++;
	}
	return -1;
}


struct Lista*eliminarElemento (struct Lista *l1, int aeliminar){
	int pos = buscarElemento(l1, aeliminar);
	struct Lista *nueva;
	
	if (pos==-1)
		return l1;
	
	int *apuntador = l1->datos;
	
	for (int i=0; i<pos; i++){
		nueva = agregar (nueva, *(apuntador));
		apuntador++;
		}
	
	for (int j=pos+1; j<=(l1->sig); j++){
			apuntador++;
			nueva = agregar (nueva, *(apuntador));
			
		}
	
	return nueva;
}
