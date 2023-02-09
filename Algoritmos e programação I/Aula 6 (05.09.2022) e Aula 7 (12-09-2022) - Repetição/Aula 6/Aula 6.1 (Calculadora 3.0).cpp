//Repetir o exercício da calculadora usando o while e adicionando uma opção [6] Fim, no menu.

#include <stdio.h>
#include <stdlib.h>	
#include <math.h>

main()
{
	int menu, num1, num2;
	printf("-----MENU CALCULADORA----- \n[1] Soma \n[2] Subtracao \n[2] Multiplicacao \n[4] Divisao \n[5] Potencia \n[6] Fim \nInforme a operacao desejada: ");
	scanf("%d", &menu);
	while (6 < menu && menu < 1)
	{
		printf("ERRO! Digite um numero válido que corresponda a uma operacao...");
		printf("\n[1] Soma \n[2] Subtracao \n[2] Multiplicacao \n[4] Divisao \n[5] Potencia \n[6] Fim \nInforme a operacao desejada: ");
		scanf("%d", &menu)
	}	
	while (menu != 6)
	{
		printf("Informe o primeiro numero inteiro: ");
		scanf("%d", &num1);
		printf("Informe o segundo numero inteiro: ");
		scanf("%d", &num2);
		switch (menu)
		{
			case 1:
				printf("A soma entre os dois numeros equivale a %.2f", num1 + num2);
				break; //O break continua sendo útil pos ele quebra o teste dos próximos cases e nao o laço while
			case 2:
				printf("A subtraçao entre os dois numeros equivale a %.2f", num1 - num2);
				break;
			case 3:
				printf("A multiplicacao entre os dois numeros equivale a %.2f", num1 * num2);
				break;
			case 4:
				if (num2 == 0)
				{
					printf("Nao se pode dividir um numero por 0. Escolha os numeros novamente. ");
					break;
				}
				else
				{
					printf("A divisao entre os dois numeros equivale a %.2f", num1 / num2);
					break;
				}
			case 5:
				printf("A potencia de %.2f elevado a %.2f equivale a %.2f", num1, num2, pow(num1, num2));
				break;
		}
		printf("-----MENU CALCULADORA----- \n[1] Soma \n[2] Subtracao \n[2] Multiplicacao \n[4] Divisao \n[5] Potencia \n[6] Fim \nInforme a novamente operacao desejada: ");
		scanf("%d", &menu);	//Tem que colocar o menu denovo porque se não a primeira operação escolhida vai ficar em looping
		if (6 < menu && menu < 1)
		{
		printf("ERRO! Digite um numero válido que corresponda a uma operacao...");
		main();
		}
	printf("Fim.");
	exit(0);
}
