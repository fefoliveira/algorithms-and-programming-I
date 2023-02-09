/*Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em P.A. contendo 10 valores. */

#include <stdio.h>

main(){
	int valor, razao, c;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	printf("Digite uma razao inteira: ");	
	scanf("%d", &razao);
	
	printf("P.A.: %d; ", valor);
	for(c = 0; c <= 8; c++){
		printf("%d; ", valor+razao);
		valor += razao;
	}
}
