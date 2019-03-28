//prorama que me cargue dos vectores con cinco elementos y compare si son iguales. 

#include<stdio.h>
#include<stdlib.h>

#define tam 5

void inicializa(int v1[tam],int v2[tam]);
void compara(int v1[tam],int v2[tam]);

int main(){
	
	int vector1[tam],vector2[tam];
	
	
	inicializa(vector1,vector2);
	compara(vector1,vector2);
	
	
	return 0;
}

void inicializa(int v1[tam],int v2[tam]){
	int i;
	
	for(i=0;i<tam;i++){
		printf("Introduce la posicion %d  para rellenar el primer vector:",i+1 ,v1[i]);
		scanf("%d",&v1[i]);
		
	}
	
		printf("\n\n");
	
	for(i=0;i<tam;i++){
	printf("Introduce la posicion %d para rellenar el segundo vector:",i+1,v2[i]);
	scanf("%d",&v2[i]);
		
	}
	
}


void compara(int v1[tam],int v2[tam]){
	
	
	int i;
	int iguales=1;
	
	for (i=0;i<tam;i++){
		if(v1[i]!=v2[i]){
			iguales=0;
		}
			
	}
	
	printf("\n\n");
	
	if(iguales==0){
		printf("No son iguales");
		
	}
	else{
		printf("Son iguales.");
	}

}

