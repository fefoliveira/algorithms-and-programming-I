/*Elabore um programa que manipule com uma matriz 5 x 5 de inteiros, posteriormente conte quantos elementos da 
diagonal secundária são maiores que 20.*/

#include <stdio.h>
int main(){
	int i, j, matriz[5][5], maior = 0;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("Digite o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}	
	}
	for(i = 0, j = 4; i <= 4 && j >= 0; i++, j--){
		if(matriz[i][j] > 20){
			maior++;
		}
	}
	printf("\nExistem %d valores maiores que 20 na diagonal secundaria da matriz.", maior);
}
