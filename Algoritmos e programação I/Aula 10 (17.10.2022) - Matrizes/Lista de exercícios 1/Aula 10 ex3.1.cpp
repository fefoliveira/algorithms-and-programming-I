/*Faça um programa que manipule com uma matriz 4 x 4 de inteiros, imprima a matriz e retorne a localização 
(linha e a coluna) do maior valor.*/

#include <stdio.h>
int main(){
	int i, j, matriz[4][4], num = 0, maior = 0, linha, coluna;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++, num++){
			printf("Digite o %do numero da matriz: ", num+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				linha = i;
				coluna = j;
			}
		}
	}
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
			printf("%d  ", matriz[i][j]);
		}
	}
	printf("\n\nO maior valor esta na posicao [%d][%d] da matriz.", linha, coluna);
}
