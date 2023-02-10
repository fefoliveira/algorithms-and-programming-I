//Programa que impreme os números de 1 a 5 por extenso. O número é lido pelo teclado:
 
#include <stdio.h>
main()
{
	int num;
	printf("Digite um numero de 1 a 7 para le-lo por extenso: ");
	scanf("%d", &num);
	switch (num) //Vai usar os cases em razão do num.
	{
		case 1: //Caso o num for == 1...
			printf("Um.");
			break; //Para o progama para ele não continuar tentando testar os outros cases.
		case 2: 
			printf("Dois.");
			break;
		case 3: 
			printf("Tres.");
			break;
		case 4: 
			printf("Quatro.");
			break;
		case 5: 
			printf("Cinco.");
			break;
			
		//Se deixar um case vazio antes, sem um break, vai testar o primeiro, não vai achar nada e vai contabilizar no próximo.
		case 6:
		case 7:
			printf("Seis ou Sete.")	

		default: //O que não foi atendido em nenhum dos cases vai ser atendido no default.
			printf("O numero digitado nao esta no intervalo de 1 a 7."); 
	}
}
