/*Desenvolver um algoritmo que leia um número não determinado de valores e calcule e escreva a média aritmética dos 
valores lidos, a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores 
negativos e positivos. */

#include <stdio.h>

main(){
	int pos = 0, neg = 0, qtd = 0;
	float valor, tot = 0;
	
	printf("Digite um valor: ");
	scanf("%f", &valor);
	while(valor != 0){
		qtd++; 
		tot += valor;
		if(valor > 0)
			pos++;
		else if(valor < 0)
			neg++;
		printf("Digite outro valor: ");
		scanf("%f", &valor);
	}
	printf("\nA media aritmetica dos valores foi %.2f.", tot/qtd);
	printf("\nForam digitados %d positivos e %d negativos.", pos, neg);
	printf("\nO percentual entre positivos e negativos corresponde a %.2f e %.2f, respectivamente.", ((float)pos*100)/(float)qtd, ((float)neg*100)/(float)qtd);
}
