//Transformar o exerc�cio da calculadora da aula passada usando switch case:

#include <stdio.h>
#include <math.h>
main()
{
	int op;
	float num1, num2;
	printf("-----MENU CALCULADORA----- \nEscolha uma operacao: \n[1] Soma \n[2] Subtracao \n[3] Multiplicacao \n[4] Divisao \n[5] Potencia \n");
	scanf("%d", &op);
	if (op < 1 || op > 5) //� importante perguntar a opera��o antes dos n�meros pois se o usu�rio escolher uma op inv�lida, o user n�o vai ter precisar ter digitado 3 n�meros at� ver que ta errado
	{
		printf("Escolha uma opera��o v�lida... \n");
		main();
	}
	printf("Digite dois numeros: \n"); 
	scanf("%f", &num1);
	scanf("%f", &num2);
	switch (op)
	{
		case 1:
			printf("A soma entre os dois numeros equivale a %.2f", num1 + num2);
			break;
		case 2:
			printf("A subtra�ao entre os dois numeros equivale a %.2f", num1 - num2);
			break;
		case 3:
			printf("A multiplicacao entre os dois numeros equivale a %.2f", num1 * num2);
			break;
		case 4:
			if (num2 == 0) //N�o testar a divis�o por zero � um erro grave de l�gica na prova!
			{
				printf("Nao se pode dividir um numero por 0. Escolha novamente os numeros a serem operados. ");
				main()
			}
			else
			{
				printf("A divisao entre os dois numeros equivale a %.2f", num1 / num2);
				break;
			}
		case 5:
			printf("A potencia de %.2f elevado a %.2f equivale a %.2f", num1, num2, pow(num1, num2));
			break;	
		//Quando n�o tem nada pra colocar no default n�o precisa colocar, ele � opcional.
	}
}
