/*Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores
lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <math.h>

main(){
	float valor;
	do {
		printf("\nDigite um valor: ");
		scanf("%f", &valor);
		if(valor > 0)
			printf("O quadrado deste valor equivale a %.2f, seu cubo a %.2f e sua raiz quadrada %.2f.", pow(valor, 2), pow(valor, 3), sqrt(valor));
	}
	while(valor > 0);
}
