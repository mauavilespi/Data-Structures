/* ¿Cuánto espacio en disco duro puedo usar?*/

#include <stdio.h>
int main (void){
	FILE * fp =NULL; //Tipo archivo
	int cuantos=0;
	fp = fopen ("bigfile.dat", "w"); //r- lectura; w-escritura
	id (fp == NULL){
		printf ("No se pudo crear :'v \n");
		return -1;
	}	
	
	do{
	cuantos = fprintf(fp, "%c", '#'); //archivo,  
	} while (cuantos>0);

	
	fclose(fp); //Cerrar archivo


	



	return 0;
}
