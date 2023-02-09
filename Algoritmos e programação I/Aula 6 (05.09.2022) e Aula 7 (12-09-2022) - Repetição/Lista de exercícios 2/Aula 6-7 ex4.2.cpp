/*Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: 
[0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar quando for lido um número negativo.*/

#include <stdio.h>

main(){
	int n025 = 0, n2650 = 0, n5175 = 0, n76100 = 0;
	float valor;

	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	while(valor > 0){	
		printf("Digite outro valor: ");
		scanf("%f", &valor);
		if(valor >= 0 && valor <= 25)
			n025++;
		else if(valor >= 26 && valor <= 50)
			n2650++;
		else if(valor >= 51 && valor <= 75)
			n5175++;
		else if(valor >= 76 && valor <= 100)
			n76100++;
		//Desconsiderei os valores maiores que 100.
	}
	printf("Foram digitados %d numeros no intervalo de [0-25], %d entre [26-50], %d entre [51-75] e %d entre [76-100].", n025, n2650, n5175, n76100);
}

