/*Lista Ligada
Aviles Piña Mauricio
Estructuras de Datos
1CV9
*/

#include <stdlib.h>
#include <stdio.h>

struct Ligada {
	int dato;
        struct Ligada * sig;
};

// Insertar un dato al inicio en una Lista Ligada
struct Ligada *insertar (int dato, struct Ligada * lista);

//Imprime elementos de una Lista Ligada
void imprimir(struct Ligada * lista);

//Busca un elemento dado en una Lista Ligada y regresa posición
int buscar (int busc, struct Ligada *lista);



int main(){

	struct Ligada *l1;
	l1=insertar(1, l1);
	l1 = insertar (5, l1);
	l1 = insertar (10, l1);
	imprimir (l1);
	
	printf("¿Está? %d \n", buscar (7, l1));

        return 0;
}

//INSERTAR (Inicio)
struct Ligada *insertar (int new, struct Ligada * lista){
        if (lista==NULL){
                lista = malloc (sizeof(struct Ligada));
                lista->dato = new;
                lista->sig = NULL;
       }else {
                struct Ligada *temp;
                temp = malloc (sizeof(struct Ligada));
                temp->dato = new;
                temp->sig=lista;
                lista=temp;
        }
        return lista;               
}
                     
//IMPRIMIR
void imprimir(struct Ligada * lista){
	struct Ligada *temp;
	temp = lista;
	while (temp!=NULL){
		printf ("%d ", temp->dato);
		temp= temp->sig;
		}
	printf ("\n");	
}


//BUSCAR
int buscar (int busc, struct Ligada *lista){
	struct Ligada *temp;
	int contador=0;
	temp =lista;
	while (1){
	contador++;
	if (temp->dato == busc)
		break;

	temp=temp ->sig;
	
	if (temp==NULL){
		contador=0;
		break;
		}
	}
	
	return contador;
}




