#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#define tam 26
#define tampw 8

void inicializa(char letras[tam]);

int main (){
	
	char abecedario[tam],password[tampw+1];
	int num,i;
	
	srand(time(NULL));
	
	inicializa(abecedario);
	
	for(i=0;i<tampw;i++){

		num=rand()%tam;
		password[i]=abecedario[num];
		}
	password[tampw]='\0';
	printf("La clave es: %s",password);
}

void inicializa(char letras[tam]){
	
	int i,aux=97;
	
	for(i=0;i<tam;i++){
		
		letras[i]=aux++;
		
	}
	return;

}
