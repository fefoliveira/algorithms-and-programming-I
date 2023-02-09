/*Elabore um programa que leia elementos inteiros em uma matriz 4X4 e posteriormente crie um vetor com os elementos 
armazenados na diagonal principal da matriz.*/

#include <stdio.h>
int main(){
	int i, j, matriz[4][4], vetor[4];
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Digite o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}	
	}
	for(i = 0; i < 4; i++){
		vetor[i] = matriz[i][i];
	}
	printf("\nSeguem os valores da diagonal principal armazenados em um vetor: \n");
	for(i = 0; i < 4; i++){
		printf("%d  ", vetor[i]);
	}
}
