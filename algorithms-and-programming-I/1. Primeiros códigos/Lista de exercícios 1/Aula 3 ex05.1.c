/*Um criador de galinhas deseja saber qual o rendimento di�rio em ovos. O valor da d�zia de ovos varia diariamente, mas ele sabe que todas as suas galinhas est�o produzindo 1 ovo por dia. 
Fa�a o programa para informar quanto em R$ o criador est� lucrando com os ovos produzidos*/

#include <stdio.h>
main()
{
	int galinhas;
	float preco, racao;
	printf("Quantas galinhas voce cria? ");
	scanf("%d", &galinhas);
	printf("Qual o preco do ovo hoje? R$");
	scanf("%f", &preco);
	printf("Quanto voce gasta de racao e agua por dia para criar as galinhas? R$");
	scanf("%f", &racao);
	printf("Voce esta lucrando R$%.2f com a producao atual de ovos.", galinhas*(preco-racao));
}
