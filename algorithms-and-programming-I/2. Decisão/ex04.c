//Escreva um programa que leia 2 valores e informe se são iguais.

#include <stdio.h>
main()
{
	int num1, num2;
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	if (num1 == num2)
	{
		printf("Os dois valores digitados sao iguais.");
	}
	else
	{
		printf("Os dois valores digitados sao diferentes.");
	}
}
