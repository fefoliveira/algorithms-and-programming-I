/*Faça um programa que lê valores inteiros maiores que 10 em um vetor de 7 posições. 
Posteriormente crie um outro vetor com os elementos ímpares do vetor original. 
Ao final do programa imprima os dois vetores criados.*/

#include <stdio.h>
int main(){
	int vetor[7], impar[7], i, cont = 0; 
	
	for(i = 0; i < 7; i++){ //Tende-se a usar o "i" pois remete ao índice do vetor.
		printf("Digite o %do valor inteiro maior que 10: ", i+1);
		scanf("%d", &vetor[i]);
		while(vetor[i] <= 10){			
			printf("Invalido! Digite novamente o %do valor inteiro maior que 10: ", i+1);
			scanf("%d", &vetor[i]);
		}
		if(vetor[i] % 2 != 0){
			impar[cont] = vetor[i];
			cont++; //Isso limita o tamanho do vetor à quantia de impares.
		}
	}
	for(i = 0; i < 7; i++){
		printf("\nPrimeiro vetor [%d]: %d", i, vetor[i]);
	}
	printf("\n");
	for(i = 0; i < cont; i++){
		printf("\nSegundo vetor [%d]: %d", i, impar[i]);
	}
}
