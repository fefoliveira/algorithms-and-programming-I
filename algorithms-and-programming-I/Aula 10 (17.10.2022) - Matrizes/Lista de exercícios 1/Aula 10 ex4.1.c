/*Faça um programa que manipule com uma matriz 5 x 5 de inteiros. 
Leia também um valor inteiro independente. O programa deverá fazer uma busca à desse valor na matriz e, 
ao final, escrever a localização (linha e coluna) ou uma mensagem de "não encontrado".*/

#include <stdio.h>
int main(){
	int i, j, matriz[5][5], num = 0, pesq, linha, coluna, achou, repete = 1, denovo;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++, num++){
			printf("Digite o %do numero da matriz: ", num+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	while(repete == 1){
		achou = 0;
		printf("\nPesquise a presenca de um valor na matriz: ");
		scanf("%d", &pesq);
		for(i = 0; i < 5; i++){
			for(j = 0; j < 5; j++, num++){
				if(matriz[i][j] == pesq){
					linha = i;
					coluna = j;
					achou = 1;
				}
			}
		}
		if(achou == 1)
			printf("O valor %d foi encontrado na posicao [%d][%d] da matriz.", pesq, linha, coluna);
		else if(achou == 0)
			printf("Nao foi encontrado o valor solicitado");
		printf("\nDeseja pesquisar a presenca de um novo valor? [1 - SIM] [0 - NAO] ");
		scanf("%d", &denovo);
		while(denovo != 1 && denovo != 0){
			printf("\nInvalido! Deseja pesquisar a presenca de um novo valor? [1 - SIM] [0 - NAO] ");
			scanf("%d", &denovo);
		}
		if(denovo == 0){
			printf("\nFIM.");
			repete = 0;	
		}
		
	}
		
}
