//Faça um programa para simular a idade futura de uma pessoa. No programa é solicitada a idade atual e a quantidade de anos que deseja simular. Imprima a idade futura.

#include<stdio.h>
main()
{
	int idade, qtdanos, soma;
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	printf("Quantos anos voce quer simualar? ");
	scanf("%d", &qtdanos);
	soma = idade+qtdanos;
	printf("Voce que hoje tem %d anos, daqui a %d ano(s) vai ter %d anos.", idade, qtdanos, soma);
}
