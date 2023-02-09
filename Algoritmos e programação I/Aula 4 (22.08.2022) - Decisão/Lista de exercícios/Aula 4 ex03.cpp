//Escreva um programa que lê 3 valores e imprima o valor do maior.

#include <stdio.h>
main()
{
	int num1, num2, num3;
	printf("Informe o primeiro valor: ");
	scanf("%d", &num1);
	printf("Informe o segundo valor: ");
	scanf("%d", &num2);
	printf("Informe o terceiro valor: ");
	scanf("%d", &num3);
	if (num1 > num2 && num1 > num3)
	{
		printf("O maior numero digitado foi %d.", num1);
	
	}
	else
	{
		if (num2 > num1 && num2 > num3)
		{
			printf("O maior numero digitado foi %d.", num2);
		}
		else
		{
			if (num3 > num1 && num3 > num2)
			{
				printf("O maior numero digitado foi %d.", num3);
			}
			else
			{
				if (num1 == num2 || num1 == num3)
				{
					printf("O maior numero digitado foi %d.", num1);
				}
				else
				{
					if (num2 == num3)
					{
						printf("O maior numero digitado foi %d.", num2);
					}
				}
			}
		}
	}
}
