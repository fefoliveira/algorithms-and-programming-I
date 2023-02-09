/*Faça um programa que crie duas matrizes 4 x 4 de inteiros e posteriormente cria  uma terceira com os maiores
valores de cada posição das matrizes lidas.*/

#include <stdio.h>
int main(){
	int i, j, m1[4][4], m2[4][4], m3[4][4], num;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++, num++){
			printf("Digite o %do numero da matriz 1: ", num+1);
			scanf("%d", &m1[i][j]);
			m3[i][j] = m1[i][j];
			printf("Digite o %do numero da matriz 2: ", num+1);
			scanf("%d", &m2[i][j]);
			if(m2[i][j] > m3[i][j])
				m3[i][j] = m2[i][j];
		}
	}
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
			printf("%d  ", m3[i][j]);
		}
	}
}
