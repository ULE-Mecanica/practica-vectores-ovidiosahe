#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
#define n 5

void inicializa(int m[n][n]);

int main(){ 
	int i,j,mat[n][n]; 
 	srand(time(NULL)); 
 	inicializa(mat);
 	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		printf("%d\t", mat[i][j]);
		}
		printf("\n");
 	}
	return 0;
}

void inicializa(int m[n][n]){
	int i,j;
	for (i=0;i<n;i++)
		for(j=0;j<n;j++)
			m[i][j]=rand()%13+3;
	return;		
}
