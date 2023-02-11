/*A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar 
a compreender aquilo que os especialistas chamam de dinâmica populacional e a entender sua relação com variáveis 
que influenciam o desenvolvimento, como qualidade de vida, migrações, fatores socioeconômicos e localização. 
Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch.

Observação: A taxa de natalidade é calculada pela seguinte fórmula: 
taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes;
Enquanto que, a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.*/

#include <stdio.h>
main()
{
	int habitantes, nascimentos, obitos;
	printf("Informe a quantidade de habitantes: ");
	scanf("%d", &habitantes);
	if (habitantes <= 0)
	{
		printf("ERRO! Insira um valor valido");
		main();
	}
	else
	{
		printf("Informe o numero de criancas nascidas: ");
		scanf("%d", &nascimentos);
		if (nascimentos < 0)
		{
			printf("ERRO! Insira valores validos...");
			main();
		}
		else
		{
			printf("Informe o numero de obitos: ");
			scanf("%d", &obitos);
			if (obitos < 0)
			{
				printf("ERRO! Insira valores validos...");
				main();
			}
			else
			{
				printf("A taxa de natalidade calculada foi de %.2f %.", (float)nascimentos*1000/(float)habitantes);
				printf("\nA taxa de mortalidade calculada foi de %.2f%.", (float)obitos*1000/(float)habitantes);
			}
		}
	}
}
