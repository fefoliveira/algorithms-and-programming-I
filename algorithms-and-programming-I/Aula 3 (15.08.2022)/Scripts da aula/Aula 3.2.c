//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que calcule o peso ideal, utilizando a seguinte fórmula: peso ideal= (72.7*h)-58

#include <stdio.h>
#include <math.h>
main()
{
	float altura;
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	printf("O peso ideal para voce e igual a %.2f.", (72.7*altura)-58);
}
