/*Crie um programa que utilizando uma função que recebe um valor e informe se ele é positivo ou não.*/

#include <stdio.h>

void funcao(float x);

int main(){
	float valor;
	int repetir = 1, denovo;
	
	while(repetir){
		printf("Digite um valor para saber se e positivo ou negativo: ");
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
	if(x > 0)
		printf("\nO valor digitado e positivo. \n");
	else if(x < 0)
		printf("\nO valor digitado e negativo. \n");
	else if(x == 0)
		printf("\nO valor digitado foi zero. \n");
}
