/*Escreva um programa que leia o valor de 3 �ngulos de um tri�ngulo e escreva se o tri�ngulo � Acut�ngulo, Ret�ngulo ou Obtus�ngulo. Sendo que: 
-Tri�ngulo Ret�ngulo: possui um �ngulo reto. (igual a 90�)
-Tri�ngulo Obtus�ngulo: possui um �ngulo obtuso. (maior que 90�) 
-Tri�ngulo Acut�ngulo: possui tr�s �ngulos agudos. (menor que 90�)*/

#include <stdio.h>
#include <math.h>
main()
{
	float a1, a2, a3;
	printf("Digite o primeiro angulo: ");
	scanf("%f", &a1);
	printf("Digite o segundo angulo: ");
	scanf("%f", &a2);
	printf("Digite o terceiro angulo: ");
	scanf("%f", &a3);
	if (a1 <= 0 || a2 <= 0 || a3 <= 0)
		printf("Nao se pode formar um triangulo quando algum dos angulos e menor ou igual a 0.");
	else if (a1 + a2 + a3 != 180)
		printf("Nao se pode formar um triangulo quando a soma dos angulos e diferente de 180.");
	else if (a1 == 90 || a2 == 90 || a3 == 90)
		printf("Os angulos digitados resultam em um triangulo RETANGULO.");
	else if (a1 > 90 || a2 > 90 || a3 > 90)
		printf("Os angulos digitados resultam em um triangulo OBTUSANGULO.");
	else if (a1 < 90 || a2 < 90 || a3 < 90)
		printf("Os angulos digitados resultam em um triangulo ACUTANGULO.");
	else
		printf("N�o e possivel formar nenhum tipo de triangulo com esses angulos.");
}
