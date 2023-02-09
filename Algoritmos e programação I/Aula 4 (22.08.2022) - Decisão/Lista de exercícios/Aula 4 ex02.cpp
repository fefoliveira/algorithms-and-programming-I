/*Laranjas custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. 
Escreva um programa que leia o número de laranjas compradas, calcule e escreva o valor total da compra*/

#include <stdio.h>
main()
{
	int laranjas;
	printf("Informe a quantia de laranjas compradas: ");
	scanf("%d", &laranjas);
	if (laranjas < 12)
	{
		printf("As %d laranjas vao custar R$%.2f.", laranjas, (float)laranjas*0.3);
	}
	else
	{
		printf("As %d laranjas vao custar R$%.2f.", laranjas, (float)laranjas*0.25);
	}
}
