//Transformar o exercício da calculadora da aula passada usando switch case:

#include <stdio.h>
#include <math.h>
main()
{
	int op;
	float num1, num2;
	printf("-----MENU CALCULADORA----- \nEscolha uma operacao: \n[1] Soma \n[2] Subtracao \n[3] Multiplicacao \n[4] Divisao \n[5] Potencia \n");
	scanf("%d", &op);
	if (op < 1 || op > 5) //É importante perguntar a operação antes dos números pois se o usuário escolher uma op inválida, o user não vai ter precisar ter digitado 3 números até ver que ta errado
	{
		printf("Escolha uma operação válida... \n");
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
			printf("A subtraçao entre os dois numeros equivale a %.2f", num1 - num2);
			break;
		case 3:
			printf("A multiplicacao entre os dois numeros equivale a %.2f", num1 * num2);
			break;
		case 4:
			if (num2 == 0) //Não testar a divisão por zero é um erro grave de lógica na prova!
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
		//Quando não tem nada pra colocar no default não precisa colocar, ele é opcional.
	}
}
