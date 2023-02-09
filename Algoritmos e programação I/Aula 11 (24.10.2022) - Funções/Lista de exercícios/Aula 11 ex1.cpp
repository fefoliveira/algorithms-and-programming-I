/*Escreva um programa que implementa o uso de uma a função que calcule e retorne a distância entre dois pontos 
(x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo float.*/

#include <stdio.h>
#include <math.h>

float distancia(float x1, float x2, float y1, float y2);

int main(){
	float x1, x2, y1, y2, dist;
	
	printf("Digite a coordenada X do primeiro ponto: ")/
	scanf("%f", &x1);
	printf("Digite a coordenada Y do primeiro ponto: ")/
	scanf("%f", &y1);
	printf("Digite a coordenada X do segundo ponto: ")/
	scanf("%f", &x2);
	printf("Digite a coordenada Y do segundo ponto: ")/
	scanf("%f", &y2);
	
	dist = distancia(x1, x2, y1, y2);
	printf("\nA distancia entre o primeiro e o segundo ponto e de %.2f.", dist);
}

float distancia(float x1, float x2, float y1, float y2){
	float p1, p2;
	p1 = pow((x2-x1), 2);
	p2 = pow((y2-y1), 2);
	return sqrt(p1+p2);
}
