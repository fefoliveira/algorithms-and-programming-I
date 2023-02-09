/*10) Escreva um algoritmo que leia um valor inicial A e imprima a sequência de valores do cálculo de A! e o seu resultado. 
Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120 */

#include <stdio.h>

main(){
	int valor, fat, mult, cont;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	while(valor < 0){
		printf("Nao existe fatorial de numero negativo! Digite novamente o valor inteiro: ");
		scanf("%d", &valor);
	}
	if(valor == 0)
		printf("0! = 1.");
	else{
		fat = valor;
		mult = valor-1;
		printf("%d! = %d X ", valor, valor);
		for(cont = 0; cont <= valor-2; cont++){
			fat *= mult;
			if(cont == valor-2)
				printf("%d = ", mult);
			else
				printf("%d X ", mult);
			mult--;
		}
		printf("%d.", fat);
	}	
}
