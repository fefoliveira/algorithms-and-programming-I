/*Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de N. 
Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.*/

#include <stdio.h>

main(){
	int valor, c;
	
	printf("Digite um valor inteiro entre 1 e 10: ");
	scanf("%d", &valor);
	while(valor < 1 || valor > 10){
		printf("Invlalido! Digite novamente um valor inteiro entre 1 e 10: ");
		scanf("%d", &valor);
	}
	for(c = 0; c <= 10; c++){
		printf("\n%d x %d = %d", c, valor, valor*c);	
	}
}
