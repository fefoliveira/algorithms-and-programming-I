//Escreva um programa que pede para o usuário entrar um número correspondente a um dia da semana e que então apresente na tela o nome do dia, utilizando o comando switch.

#include <stdio.h>
main()
{
	int dia;
	printf("Informe o numero correspondente ao dia da semana: ");
	scanf("%d", &dia);
	/*if (dia < 1 || dia > 7)
	{
		printf("Informe um numero correspondente... \n")
		main();*/
	}
	switch (dia)
		case 1:
			printf("Domingo.");
			break;
		case 2:
			printf("Segunda-feira.");
			break;
		case 3:
			printf("Terça-feira.");
			break;
		case 4:
			printf("Quarta-feira.");
			break;
		case 5:
			printf("Quinta-feira.");
			break;
		case 6:
			printf("Sexta-feira.");
			break;
		case 7:
			printf("Sabado.");
			break;
		default:
			printf("ERRO! Informe um numero correspondente... \n")
			main();
			
}
