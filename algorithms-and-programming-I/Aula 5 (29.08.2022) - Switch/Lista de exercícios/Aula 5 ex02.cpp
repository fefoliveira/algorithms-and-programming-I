//Escreva um programa utilizando o comando switch que imprima um mês de acordo com o número digitado pelo usuário.

#include <stdio.h>
main()
{
	int mes;
	printf("Informe o numero correspondente a um mes do ano: ");
	scanf("%d", &mes);
	switch (mes)
	{
		case 1:
			printf("Janeiro.");
			break;
		case 2:
			printf("Fevereiro.");
			break;
		case 3:
			printf("Março.");
			break;
		case 4:
			printf("Abril.");
			break;
		case 5:
			printf("Maio.");
			break;
		case 6:
			printf("Junho.");
			break;
		case 7:
			printf("Julho.");
			break;
		case 8:
			printf("Agosto.");
			break;
		case 9:
			printf("Setembro.");
			break;
		case 10:
			printf("Outubro.");
			break;
		case 11:
			printf("Novembro.");
			break;
		case 12:
			printf("Desembro.");
			break;
		default:
			printf("ERRO! Informe um numero correspondente... \n");
			main();
	}		
}
