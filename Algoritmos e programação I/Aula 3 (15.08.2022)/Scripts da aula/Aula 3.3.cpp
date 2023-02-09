/*Construa um programa que tendo como entrada dois pontos quaisquer do plano P(x1, y1) e Q(x2, y2), imprima a distância entre eles. 
A fórmula da distância é: sqrt(pow(x2-x1, 2)+pow(y2-y1,2))*/

#include <stdio.h>
#include <math.h>
main()
{
	float x1, x2, y1, y2;
	printf("Digite o primero ponto do plano P: ");
	scanf("%f", &x1);
	printf("Digite o segundo ponto do plano P: ");
	scanf("%f", &y1);
	printf("Digite o primero ponto do plano Q: ");
	scanf("%f", &x2);
	printf("Digite o segundo ponto do plano Q: ");
	scanf("%f", &y2);
	printf("A distancia entre ele equivale a %.2f", sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)));
}
