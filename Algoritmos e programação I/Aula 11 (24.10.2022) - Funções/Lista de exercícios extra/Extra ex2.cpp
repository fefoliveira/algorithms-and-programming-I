/*Elabore um programa que use uma função que recebe um valor e diga se é nulo ou não.*/

#include <stdio.h>

void funcao(float x);

int main(){
	float valor;
	int repetir = 1, denovo;
	
	while(repetir){
		printf("Digite um valor para saber se este e nulo ou nao: ");
		scanf("%f", &valor);
		funcao(valor);
		printf("\nDeseja testar outro valor? [1 - Sim] [0 - Nao]: ");
		scanf("%d", &denovo);
		while(denovo != 1 && denovo != 0){
			printf("Invalido Deseja testar outro valor? Digite apenas [1 - Sim] [0 - Nao]: ");
			scanf("%d", &denovo);	
		}	
		if(denovo == 0)
			repetir = 0;
	}
	printf("\nFIM.");
}

void funcao(float x){
	if(x == 0)
		printf("\nO valor digitado e nulo. \n");
	else
		printf("\nO valor digitado nao e nulo. \n");
}
