/* ¿Cuánta memoria RAM tengo disponible?*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n =0;
	void*apuntador=NULL; //apuntador genérico	
	do{
	apuntador = malloc (1);
	n++;
	printf ("%d \n", n);
	}while (apuntador !=NULL);
	//n--;
	//printf ("Se reservaron %d octetos \n", n);
			
	return 0;
}
