/*Fazer um programa em  C que solicite 2 n�meros e informe: 
a) A soma dos n�meros;
b) O produto do primeiro n�mero pelo quadrado do segundo;
c) O quadrado do primeiro n�mero;*/

#include <stdio.h>
//#include <math.h>
main()
{
	int num1, num2;
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &num1);	
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &num2);
	printf("\nA soma dos numeros equivale a %d", num1+num2);
	printf("\nO produto do primeiro numero pelo quadrado do segundo equivale a %d", num1*(num2*num2)); //N�o funcionou com a fun��o pow(x, y)
	printf("\nO quadrado do primeiro numero equivale a %d", num1*num1);
}

