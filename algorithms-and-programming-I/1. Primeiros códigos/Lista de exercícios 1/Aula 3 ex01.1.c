//Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em cent�metros e mil�metros. 

#include <stdio.h>
main()
{
	float valor;
	printf("Digite uma dist�ncia em metros: ");
	scanf("%f", &valor);
	printf("%f metros corresponde a %.2f centimetros e a %f milimetros.", valor, valor/100, valor/1000);
}
