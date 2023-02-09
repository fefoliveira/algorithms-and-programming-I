/*Usando as 3 funções dos 3 exercicios anteriores, crie um programa que calcula as raízes de uma equação do 2o grau:
ax² + bx + c = 0
Para ela existir, o coeficiente 'a' deve ser diferente de zero.
Caso o delta seja maior ou igual a zero, as raízes serão reais. 
Caso o delta seja negativo, as reais serão complexas e da forma: x + iy*/

#include <stdio.h>
#include <math.h>


int main(){
	
}

void posneg(float x){
	if(x > 0)
		printf("\nO valor digitado e positivo. \n");
	else if(x < 0)
		printf("\nO valor digitado e negativo. \n");
	else if(x == 0)
		printf("\nO valor digitado foi zero. \n");
}

void nulo(float x){
	if(x == 0)
		printf("\nO valor digitado e nulo. \n");
	else
		printf("\nO valor digitado nao e nulo. \n");
}

float delta(float a, float b, float c){
	float retorno;
	retorno = pow(b, 2)-4*a*c;
	return retorno;
}
