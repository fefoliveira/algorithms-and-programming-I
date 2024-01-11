/*Elabore um programa para a partir de uma data informada de maneira separada dia, mês e ano. 
Faça as consistências para verificar se é uma data válida.*/

#include <stdio.h>

main()
{
	int dia, mes, ano;
	printf("\nInforme o dia: ");
	scanf("%d", &dia);
	if (1 <= dia && dia <= 31)
		printf("Formato de dia valido...");
	else
	{
			printf("ERRO! Formato de dia invalido, insira novamente o valor...");
			main();
	}
	
	printf("\nInforme o mes: ");
	scanf("%d", &mes);
	if (1 <= mes && mes <= 12)
		printf("Formato de mes valido...");
	else
	{
		printf("ERRO! Formato de mes invalido, insira novamente os valores...");
		main();	
	}
	
	printf("\nInforme o ano: ");
	scanf("%d", &ano);
	if (0 < ano && ano < 2023)
	{
		printf("Formato de ano valido.");
	}
	else
	{
		printf("ERRO! Formato de mes invalido, insira novamente os valores...");
		main();
	}
	printf("\nA data inserida foi %d/%d/%d.", dia, mes, ano);
}
