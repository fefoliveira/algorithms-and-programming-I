/*Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se ele � Equil�tero, Is�sceles ou Escaleno. Sendo que: 
-Tri�ngulo Equil�tero: possui os 3 lados iguais. 
-Tri�ngulo Is�scele: possui 2 lados iguais. 
-Tri�ngulo Escaleno: possui 3 lados diferentes.*/

#include <stdio.h>
#include <math.h>
main()
{
	float lado1, lado2, lado3;
	printf("Digite a medida do primeiro lado do triangulo: ");
	scanf("%f", &lado1);
	printf("Digite a medida do segundo lado do triangulo: ");
	scanf("%f", &lado2);
	printf("Digite a medida do terceiro lado do triangulo: ");
	scanf("%f", &lado3);
	if (lado1 == lado2 == lado3)
	{
		printf("As medidas digitadas correspondem a um triangulo equilatero!");
	}
	else
	{
		if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
		{
			printf("As medidas digitadas correspondem a um triangulo isosceles!");
		}
		else
		{
			if(lado1 != lado2 != lado3)
			{
				printf("As medidas digitadas correspondem a um triangulo escaleno!");
			}
		}
	}
}
