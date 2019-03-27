#include <stdio.h> 
#include <math.h> 

float distancia_euclidea(float p1[2],float p2[2]);

int main(){
	
	float pto1[2],pto2[2];
	double distancia;
	
	printf("Introduzca las coordenadas x e y del punto 1:\n");
	scanf("%f",&pto1[0]);
	scanf("%f",&pto1[1]);
	
	printf("Introduzca las coordenadas x e y del punto 2:\n");
	scanf("%f",&pto2[0]);
	scanf("%f",&pto2[1]);
	
	distancia=distancia_euclidea(pto1,pto2);
	
	printf("La distancia entre los puntos es %f\n",distancia); 
	
	return 0;
}

float distancia_euclidea(float p1[2],float p2[2]){
	
	float resultado;
	
	resultado=sqrt(pow((p2[0]-p1[0]),2)+pow((p2[1]-p1[1]),2));

	return (resultado);
}
