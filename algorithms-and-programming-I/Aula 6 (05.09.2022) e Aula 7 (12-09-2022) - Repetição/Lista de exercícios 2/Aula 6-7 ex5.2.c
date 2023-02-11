/*Faça um algoritmo estruturado que leia uma quantidade não determinada de números positivos. 
Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. 
O número que encerrará a leitura será zero.*/

#include <stdio.h>

main(){
	int num, par = 0, vpar= 0, imp = 0, tot = 0, qtd = 0;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &num);
	while(num < 0){
		printf("Negativos sao invalidos! Digite novamente um numero positivo: ");
		scanf("%d", &num);
	}
	while(num > 0){
		qtd++;
		tot += num;
		if(num % 2 == 0){	
			par++;
			vpar += num;
		}
		else if(num % 2 != 0)
			imp++;
		printf("Digite outro numero positivo: ");
		scanf("%d", &num);
		while(num < 0){
			printf("Negativos sao invalidos! Digite novamente outro numero positivo: ");
			scanf("%d", &num);
		}
	}
	printf("\nForam digitados %d numeros pares e %d impares.", par, imp); 
	printf("\nA media dos pares foi de %.2f e a media geral foi %.2f.", (float)vpar/(float)par, (float)tot/(float)qtd);
}
