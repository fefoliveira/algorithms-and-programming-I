/*Crie um programa que chama uma  fun��o que recebe tr�s valores (a,b e c), que s�o os coeficientes de uma 
equa��o do segundo grau e retorne o valor do delta, que � dado por 'b� - 4ac'*/

#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);

int main(){
	float valor1, valor2, valor3, result;
	printf("Digite o valor 'a' da equacao: ");
	scanf("%f", &valor1);
	printf("Digite o valor 'b' da equacao: ");
	scanf("%f", &valor2);
	printf("Digite o valor 'c da equacao: ");
	scanf("%f", &valor3);
	result = delta(valor1, valor2, valor3);
	printf("\nO valor do delta calculado para as entradas informadas e de %.2f.", result);
}

float delta(float a, float b, float c){
	float retorno;
	retorno = pow(b, 2)-4*a*c;
	return retorno;
}
