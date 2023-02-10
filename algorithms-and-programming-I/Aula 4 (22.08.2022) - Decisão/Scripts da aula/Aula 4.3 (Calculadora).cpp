/*Elabore um programa que implemente opera��es b�sicas de uma calculadora. Por�m a opera��o � esclhida pelo usu�rio ap�s a apresenta��o de um menu. As opera��es matem�ticas s�o realizadas sobre 2 n�meros inteiros.
Apresente o menu dessa forma:
	Menu Calculadora
	1 - Soma
	2 - Subtra��o
	3 - Multiplica��o
	4 - Divis�o
	5 - Pot�ncia*/

#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
main()
{
	int menu, num1, num2;
	printf("-----MENU CALCULADORA----- \n1 - Soma \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao \n5 - Potencia \nInforme a operacao desejada: ");
	scanf("%d", &menu);
	if (menu != 1 && menu != 2 && menu != 3 && menu != 4 && menu != 5)
	{
		printf("ERRO! Digite um numero v�lido que corresponda a uma operacao.");
		exit(0);
	}
	printf("Informe o primeiro numero inteiro: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero inteiro: ");
	scanf("%d", &num2);
	if (menu == 1)
		printf("A soma entre %d e %d equivale a %d.", num1, num2, num1+num2);
	else //Tem que colocar um else pro computador n�o continuar tentando encontrar um menu == 1, n�o usar o else ocasiona no gasto excessivo de processamento pois o computador vai checar todos os ifs indepentente se ja achou o resultado ou n�o.
		if (menu == 2)
			printf("A subtra��o entre %d e %d equivale a %d.", num1, num2, num1-num2);
		else
			if (menu == 3)
				printf("A multiplica��o entre %d e %d equivale a %d.", num1, num2, num1*num2);
			else
				if (menu == 4)
				{
					if (num2 == 0)
						printf("ERRO! N�o se pode dividir um numero por 0.");
					else
						printf("A divis�o entre %d e %d equivale a %.2f.", num1, num2, (float)num1/(float)num2);
				}
				else
					if (menu == 5)
						printf("A potencia de %d elevado a %d equivale a %.0f.", num1, num2, pow(num1, num2)); //Para pow, o % dentro do print retorna %f.
}
