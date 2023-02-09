/*Fazer um programa em C que pergunte um valor em graus Fahrenheit e imprime o  correspondente em graus Celsius usando a fórmula: 
C=(f-32.0) * (5.0/9.0).*/

#include <stdio.h>
main()
{
	float f;
	printf("Digite uma temperatura em graus F: ");
	scanf("%f", &f);
	printf("A temperatura de %.1fF corresponde a %.1fC.", f, (f-32.0)*(5.0/9.0));
}
