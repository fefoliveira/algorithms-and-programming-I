/*Usando as 3 fun��es dos 3 exercicios anteriores, crie um programa que calcula as ra�zes de uma equa��o do 2o grau:
ax� + bx + c = 0
Para ela existir, o coeficiente 'a' deve ser diferente de zero.
Caso o delta seja maior ou igual a zero, as ra�zes ser�o reais. 
Caso o delta seja negativo, as reais ser�o complexas e da forma: x + iy*/

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
