/*Elabore um programa que manipule com uma matriz 4 x 4 de inteiros, 
conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>
int main(){
	int i, j, matriz[4][4], cont = 0, num = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++, num++){
			printf("Digite o %do numero da matriz: ", num+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] > 10)
				cont++;
		}
	}
	printf("\nExistem %d valores maiores que 10 na matriz.", cont);
}
