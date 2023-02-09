/*Faça um programa que preenche uma matriz 4 x 4 de inteiros com o produto do valor da linha e da coluna de 
cada elemento. Em seguida, imprima na tela a matriz. */

#include <stdio.h>
int main(){
	int i, j, matriz[4][4];
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			matriz[i][j] = i*j;
		}
	}
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
			printf("%d  ", matriz[i][j]);
		}
	}
}
