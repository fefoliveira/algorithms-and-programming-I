/*Usando as consistências do programa 1: 
Informe o dia seguinte, a partir de uma data (dia, mês e ano) informada pelo teclado. 
A saída deve ter dia, mês e ano.*/

#include <stdio.h>

main()
{
	int dia, mes, ano;
	
	printf("\nInforme o dia: ");
	scanf("%d", &dia);
	printf("Informe o mes: ");
	scanf("%d", &mes);
	printf("Informe o ano: "); 
	scanf("%d", &ano);
	
	if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1) 
	{
		printf("\nA data inserida foi %d/%d/%d. \n", dia, mes, ano);
		switch (mes)
		{
			/*Aparentemente pode-se usar um case do lado do outro para usar as mesma instruções para todos. Isso equivale a um:
				case 2:
				case 3:
					instrução...
			Isso faz com que tanto o caso 2 como o 3 aceitem a instrução.*/
			case 1: case 3: case 5: case 7: case 8: case 10: case 12: //Meses que tem 31 dias
				if (1 <= dia && dia < 31)
				{
					printf("A data seguinte a esta e %d/%d/%d.", dia+1, mes, ano);
					break;
				}
				else if (dia == 31 && mes != 12)
				{
					printf("A data seguinte a esta e 1/%d/%d.", mes+1, ano);
					break;
				}
				else if (dia == 31 && mes == 12)
				{
					printf("A data seguinte a esta e 1/1/%d.", ano+1);
					break;
				}
			case 4: case 6: case 9: case 11: //Meses que tem 30 dias
				if (1 <= dia && dia <= 30)
				{
					if (dia != 30)
					{
						printf("A data seguinte a esta e %d/%d/%d.", dia+1, mes, ano);
						break;
					}
					else if (dia == 30)
					{
						printf("A data seguinte a esta e 1/%d/%d.", mes+1, ano);
						break;
					}
				}
				else
				{
					printf("ERRO! Este mes nao possui um dia 31, insira os valores novamente...");
					main();
				}
			case 2: //Fevereiro (28 dias e 29 em anos bissextos)
				if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) //Checador de bissexto
				{
					if (1 <= dia && dia < 29)
					{
						printf("A data seguinte a esta e %d/%d/%d.", dia+1, mes, ano);
						break;
					}
					else if (dia == 29)
					{
						printf("A data seguinte a esta e 1/%d/%d.", mes+1, ano);
						break;
					}
					else
					{
						printf("ERRO! Este mes nao possui um dia 30 ou 31, insira os valores novamente...");
						main();
					}
				}
				else 
				{
					if (1 <= dia && dia < 28)
					{
						printf("\nA data seguinte a esta e %d/%d/%d.", dia+1, mes, ano);
						break;
					}
					else if (dia == 28)
					{
						printf("A data seguinte a esta e 1/%d/%d.", mes+1, ano);
						break;
					}
					else if (dia == 29)
					{
						printf("ERRO! Este mes nao possui um dia 29 pois o ano nao e bissexto, insira os valores novamente...");
						main();
					}
					else 
					{
						printf("ERRO! Este mes nao possui um dia 30 ou 31, insira os valores novamente...");
						main();
					}
				}
		}
	}
	else
	{
		printf("ERRO! Algum formato e invalido, insira os valores novamente...");
		main();
	}
}
