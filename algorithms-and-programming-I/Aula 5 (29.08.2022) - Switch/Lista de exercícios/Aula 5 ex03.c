/*A taxa de natalidade e a taxa de mortalidade s�o indicadores estat�sticos de fundamental import�ncia�por ajudar 
a compreender aquilo que os especialistas chamam de din�mica populacional e a entender sua rela��o com vari�veis 
que influenciam o desenvolvimento, como qualidade de vida, migra��es, fatores socioecon�micos e localiza��o. 
Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch.

Observa��o: A taxa de natalidade � calculada pela seguinte f�rmula: 
taxa de natalidade = (n�mero de crian�as nascidas x 1000) / n�mero de habitantes;
Enquanto que, a taxa de mortalidade = (n�meros de �bitos x 1000) /n�mero de habitantes.*/

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
