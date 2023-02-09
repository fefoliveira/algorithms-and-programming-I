/*Escreva um programa que leia o número de habitantes de uma determinada cidade, o valor do kwh e, para cada habitante, entre com os dados: 
consumo do mês e o código do consumidor (1: residencial, 2: comercial, 3: industrial). 
No nal, imprima o maior, o menor e a média de consumo dos habitantes e, por m, o total de consumo de cada categoria de consumidor.*/

#include <stdio.h>

main(){
	int hab, cont, num_hab, cod;
	float valor, cons, max_cons, min_cons, tot_cons, cod_1, cod_2, cod_3;
	
	printf("Digite o numero de habitantes da cidade: ");
	scanf("%d", &hab);
	while(hab <= 0){
		printf("Invalido... digite novamente o numero de habitantes da cidade: ");
		scanf("%d", hab);		
	}
	
	printf("Digite o valor do kwh: ");
	scanf("%f", &valor);
	while(valor <= 0){
		printf("Invalido... digite novamente o valor do kwh: ");
		scanf("%f", valor);	
	}
	cont = hab;
	num_hab = 1;
	max_cons = 0;
	min_cons = 0; 
	tot_cons = 0;
	cod_1 = 0;
	cod_2 = 0;
	cod_3 = 0;
		
	while(cont > 0){
		printf("Digite o consumo mensal do %do habitante, em kwh: ", num_hab);
		scanf("%d", &cons);
		if(cons > max_cons)
			max_cons = cons;
		if(cont == hab)
			min_cons = cons;
		else if(cons < min_cons)
			min_cons = cons;
			
		printf("Digite o codigo de consumidor do %do habitante [1, 2 ou 3]: ", num_hab);
		scanf("%d", &cod);
		while(cod != 1 && cod != 2 && cod != 3){
			printf("Invalido... digite novamente o codigo de consumidor do %do habitante [1, 2 ou 3]: ", num_hab);
			scanf("%d", &cod);
		}
		switch(cod){
			case 1: 
				cod_1 += cons;
				break;
			case 2: 
				cod_2 += cons;
				break;
			case 3: 
				cod_3 += cons;
				break;
		}
			cont--;
			num_hab++;
			tot_cons += cons;
	}
	printf("O maior consumo foi %.2fkwh, o menor %.2fkwh e a media de consumo foi de %.2fkwh/habitante.", max_cons, min_cons, tot_cons/hab);
	printf("\n\nSobre o total de consumo das categorias: \n[1 - Residencial] foi de %.2fkwh; [2 - Comercial] foi de %.2fkwh; [3 - Industrial] foi de %.2fkwh.", cod_1, cod_2, cod_3);
}
