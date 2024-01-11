/*Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos e espaços em branco. 
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
	*****
	*   *
	*   *
	*   *
	*****
*/

#include <stdio.h>

main()
{
	int lado, cont, esp;
	printf("Informe o lado do quadrado: ");
	scanf("%d", &lado);
	while (lado <= 0 || lado > 20)
	{
		printf("Lado invalido...");
		printf("\nInforme o lado do quadrado: ");
		scanf("%d", &lado);
	}
	cont = lado;
	while (cont > 0)
	{
		printf("* "); 
		cont--;
	}
	cont = lado;
	while (cont > 2)
	{
		esp = lado*2-3;
		printf("\n*");
		while (esp > 0)
		{
			printf(" ");
			esp--;
		}
		printf("*");
		cont--;
	}
	cont = lado;
//printf("\n* ");
	while (cont > 0)
	{
		printf("* ");
		cont--;
	}
}
