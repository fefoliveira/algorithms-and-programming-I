/*Fa�a um algoritmo estruturado que leia uma quantidade n�o determinada de n�meros positivos. 
Calcule a quantidade de n�meros pares e �mpares, a m�dia de valores pares e a m�dia geral dos n�meros lidos. 
O n�mero que encerrar� a leitura ser� zero.*/

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
