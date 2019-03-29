#include<stdio.h>
#define n 9

void inicializa(int m[n][n]);

int main(){ 

	int i,j,mat[n][n]; 
 	inicializa(mat);
 	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		printf("%d\t",mat[i][j]);
		}
		printf("\n");
 	}
	return 0;
}

void inicializa(int m[n][n]){
	int i,j;
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				m[i][j]=1;
			}
			else{
				m[i][j]=0;
			}
		}
	}
	return;		
}
