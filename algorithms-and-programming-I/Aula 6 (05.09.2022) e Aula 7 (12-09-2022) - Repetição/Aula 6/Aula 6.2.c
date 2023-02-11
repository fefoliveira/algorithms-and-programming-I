//Ler dois números inteiros positivos e imprimir a soma de ambos, onde a soma só será impressa depois dos valores serem corretos.

#include <stdio.h>

main()
{
	int num1, num2;
	printf("Informe o primeiro numero: ")
	scanf("%d", &num1);
	while (num1 <= 0)
	{
		printf("Informe o primeiro numero: ")
		scanf("%d", &num1);
	}
	printf("Informe o segundo numero: ")
	scanf("%d", &num2);
	while (num2 <= 0)
	{
		printf("Informe o segundo numero: ")
		scanf("%d", &num2);
	}
	printf("A soma dos numeros inseridos equivale da %d.", num1+num2);
}

