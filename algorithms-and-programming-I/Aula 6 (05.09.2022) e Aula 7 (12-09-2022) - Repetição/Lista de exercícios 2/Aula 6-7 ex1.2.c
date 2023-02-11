/*Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se 
encontram no conjunto dos números de 1 até 500. */

#include <stdio.h>

main(){
	int num = 1, soma;
	while(num < 500){
		if(num % 2 != 0 && num % 3 == 0)
			soma += num;			
		num++;	
	}
	printf("A soma equivale a %d.", soma);
}
