/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar: 
a. A menor altura do grupo; 
b. A maior altura do grupo; */

#include <stdio.h>

main(){
	int num = 1, c;
	float alt, maior = 0, menor = 0;
	
	for(c = 0; c < 15; c++){
		printf("Digite a altura da %da pessoa: ", num);
		scanf("%f", &alt);
		if(alt > maior)
			maior = alt;
		if(c == 0)
			menor = alt;
		else if(alt < menor)
			menor = alt;
		num++;
	}
	printf("A maior altura do grupo foi %.2fm e a menor %.2fm.", maior, menor);
}
