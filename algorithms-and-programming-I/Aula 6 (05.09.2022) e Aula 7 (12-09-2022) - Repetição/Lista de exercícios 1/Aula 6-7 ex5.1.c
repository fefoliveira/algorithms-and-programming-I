/*Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996 recebeu aumento de 1.5%. 
A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior. Faça programa que determine o salário atual do funcionário.*/

#include <stdio.h>

main(){
	int ano, qtd_anos, cont = 0;
	float sal = 3000 /*(2000 * 1,5)*/, aum = 1000;
	
	printf("Informe o ano atual: ");
	scanf("%d", &ano);
	while(ano < 1996){
		printf("Invalido! Informe o ano atual novamente: ");
		scanf("%d", &ano);
	}
	
	qtd_anos = ano - 1996;
	while(cont < qtd_anos){
		aum *= 2;
		sal += aum;
		cont++;
	}
	printf("O salario do funcionario no atual ano de %d equivale a R$%.2f.", ano, sal);
}
