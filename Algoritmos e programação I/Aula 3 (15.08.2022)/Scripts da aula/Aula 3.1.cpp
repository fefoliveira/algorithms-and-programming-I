//Faça um programa que lê 2 valores inteiros do teclado e mostre o valor da divisão.

#include <stdio.h>
#include <math.h> //Adiciona uma biblioteca com diversas funções matemáticas
main()
{
	//Declaração de variavéis
	int num1, num2, resto;
	float div;
	//Comandos
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	div = (float)num1/(float)num2; //Cast é a alteração do tipo de dado em tempo de execução, por exemplo: (float)num1, transforma o num1 em float só na operação
	printf("\nO valor da divisao de %d por %d e igual a %.2f.", num1, num2, div);
	resto = num1%num2; //O resto é usado principalmente pra saber se o num é par ou ímpar*
	printf("\nO valor do resto da divisao de %d por %d e igual a %d.", num1, num2, resto);
	printf("\nO valor da potencia de %d elevado a %d e igual a %.2lf.", num1, num2, pow((float)num1, (float)num2)); //Sintaxe: pow(base, expoente)
	printf("\nO valor da raiz quadrada de %d e igual a %.2lf.", num1, sqrt(num1)); //Deve-se usar %lf (double) pois o cara que criou a biblioteca quis assim (em pow e sqrt)
	printf("\nO logaritmo de %d e igual a %.3lf.", num1, log(num1));
	printf("\nO logaritmo de %d na base 10 e igual a %.2lf.", num1, log10(num1));
}
