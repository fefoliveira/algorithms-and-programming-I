/*Elabore um programa que leia dados em matriz 4X4 de inteiros e posteriormente imprima os elementos que estão
armazenados abaixo da diagonal secundária e some os valores que estão acima da diagonal principal.*/

#include <stdio.h>
int main(){
	int i, j, matriz[4][4], soma = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Digite o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}	
	}
	printf("\nSeguem os valores abaixo da diagonal secundaria da matriz: ");
	for(i = 1, j = 3; i < 3 && j > 0; i++, j--){
		printf("\nmatriz[%d][%d] = %d", i, j, matriz[i][j]);
	}
	for(i = 0, j = 1; i < 3 && j > 4; i++, j++){
		soma += matriz[i][j];
	}
	printf("\n\nA soma dos valores que estao acima da diagonal principal equivale a %d.", soma);
}
