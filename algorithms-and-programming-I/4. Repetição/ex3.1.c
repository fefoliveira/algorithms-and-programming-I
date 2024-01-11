/*Fa�a um programa que calcule a �rea de um tri�ngulo, cuja base e altura s�o fornecidas pelo usu�rio. 
Esse programa n�o pode permitir a entrada de dados inv�lidos, ou seja, medidas menores ou iguais a 0.*/

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
