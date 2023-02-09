/*Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200. */

#include <stdio.h>

main(){
	int num = 100, cont;
	
	for(cont = 0; cont < 100; cont++){
		num++;
		if(num % 2 != 0)
			printf("\n%d", num);
	}
}
