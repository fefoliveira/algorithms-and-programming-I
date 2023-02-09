//Ler 2 números inteiros e fazer a soma, porém num1 deve ter valoresde 1 até 5 e num2 deve ser > 10.

#include <stdio.h>
main()
{
	int num1, num2;
	printf("Digite o valor para o primeiro numero: ");
	scanf("%d", &num1);
	if (num1 >= 1 && num1 <= 5)
	{
		printf("Digite o valor para o segundo numero: ");
		scanf("%d", &num2);
		if (num2 > 10)
		{
			printf("A soma dos dois numeros equivale a %d.", num1 + num2);
		}
		else
		{
			printf("Erro! O valor do segundo numero precisa ser >10.");
		}
	}
	else
	{
		printf("Erro! O valor do primeiro numero precisa ser >=1 e <=5.");
	}
}

