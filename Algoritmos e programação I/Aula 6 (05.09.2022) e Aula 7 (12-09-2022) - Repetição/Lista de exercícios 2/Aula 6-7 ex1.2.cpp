/*Desenvolver um algoritmo que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos de tr�s e que se 
encontram no conjunto dos n�meros de 1 at� 500. */

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
