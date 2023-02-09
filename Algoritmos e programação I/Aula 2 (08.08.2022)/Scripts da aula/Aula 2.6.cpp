//Faça um programa para informar a apessoa que idade ela terá em um determinado ano informado por ela mesmo.

#include<stdio.h>
main()
{
	int idade, atual, ano, sub, soma;
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	printf("Em qual ano voce esta? ");
	scanf("%d", &atual);
	printf("Em qual ano voce quer simular? ");
	scanf("%d", &ano);
	sub = ano-atual;
	soma = idade+sub;
	printf("Voce que hoje tem %d anos em %d vai ter %d anos.", idade, ano, soma);
}
