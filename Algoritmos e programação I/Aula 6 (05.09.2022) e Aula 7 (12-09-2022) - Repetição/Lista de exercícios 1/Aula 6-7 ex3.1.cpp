/*Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas pelo usuário. 
Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou iguais a 0.*/

#include <stdio.h>

main(){
	float b, h;
	
	printf("Digite a base do triangulo (em m): ");
	scanf("%f", &b);
	while(b <= 0){
		printf("Medida invalida! Digite a base do triangulo novamente (em m): ");
		scanf("%f", &b);
	}
	printf("Digite a altura do triangulo (em m): ");
	scanf("%f", &h);
	while(h <= 0){
		printf("Medida invalida! Digite a altura do triangulo novamente (em m): ");
		scanf("%f", &h);
	}	
	printf("A area do triangulo equivale a %.2fm^2.", b*h/2);
}
