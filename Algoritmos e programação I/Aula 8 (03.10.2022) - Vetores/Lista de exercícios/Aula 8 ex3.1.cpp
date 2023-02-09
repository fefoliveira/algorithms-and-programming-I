/*Faça um programa que armazena valores de salários dos últimos 5 meses de um funcionário. 
O funcionário pode receber a mais de um mês para outro maior, mas nunca menos. 
Informe ao final se o funcionário recebeu algum aumento e em que mês. 
Calcule o valor total recebido nos 5 meses.*/

#include <stdio.h>
int main(){
	int sal[4], i, soma = 0;
	
	printf("Digite o salario do 1o mes: ");
	scanf("%d", &sal[0]);
	soma += sal[0];
	for(i = 1; i <= 4; i++){
		printf("Digite o salario do %do mes: ", i+1);
		scanf("%d", &sal[i]);
		while(sal[i] < sal[i-1]){
			printf("Invalido! O salario nao pode ser menor que o do mes anterior, digite novamente o salario do %do mes: ", i+1);
			scanf("%d", &sal[i]);
		}
		soma += sal[i];
	}
	for(i = 1; i <= 4; i++){
		printf("\nNo %do mes ", i+1);	
		if(sal[i]==sal[i-1])
			printf("nao houve um aumento salarial em relacao ao %do.", i);
		else
			printf("houve um aumento salarial de R$%.2f em relacao ao %do.", sal[i]-sal[i-1], i);
	}
	printf("\n\nO total recebido nesses 5 meses foi de R$%.2f.", soma);
}
