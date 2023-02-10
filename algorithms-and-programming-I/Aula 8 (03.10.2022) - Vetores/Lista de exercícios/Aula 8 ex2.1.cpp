/*Um fazendeiro deseja controlar o peso de seu pequeno rebanho de cabras, assim ele irá por 3 meses pesar cada um de seus 10 animais e registar o peso de cada um. 
Você irá criar um programa que possibilite estes registros mensais para as 10 cabras. 
O programa irá mostrar para cada animal a perda ou ganho de pesos nos três meses e identificar em qual mês o animal teve o maior peso. 
Informe, também, o peso total do rebanho no último mês e o valor da diferença entre o primeiro mês e o último mês do registro.*/

#include <stdio.h>
int main(){
	int p;
	float peso1[10], peso2[10], peso3[10], pesototal1 = 0, pesototal3 = 0;
		
	for(p = 0; p < 10; p++){
		printf("Informe o peso da %da cabra no primeiro mes: ", p+1);
		scanf("%f", &peso1[p]);
		while(peso1[p] <= 0){
			printf("Invalido! Informe novamente o peso da %da cabra no primeiro mes: ", p+1);
			scanf("%f", &peso1[p]);
		}
		pesototal1 += peso1[p];
	}
	printf("\n");
	for(p = 0; p < 10; p++){
		printf("Informe o peso da %da cabra no segundo mes: ", p+1);
		scanf("%f", &peso2[p]);
		while(peso2[p] <= 0){
			printf("Invalido! Informe novamente o peso da %da cabra no segundo mes: ", p+1);
			scanf("%f", &peso2[p]);
		}
	}
	printf("\n");
	for(p = 0; p < 10; p++){
		printf("Informe o peso da %da cabra no terceiro mes: ", p+1);
		scanf("%f", &peso3[p]);
		while(peso3[p] <= 0){
			printf("Invalido! Informe novamente o peso da %da cabra no terceiro mes: ", p+1);
			scanf("%f", &peso3[p]);
		}
		pesototal3 += peso3[p];
	}
	printf("\n-------------------------------------------------------\n\n");
	for(p = 0; p < 10; p++){
		printf("\nA %da cabra ", p+1);
		if(peso3[p] > peso1[p])
			printf("ganhou %.2fKg em relacao ao primeiro mes.", peso3[p]-peso1[p]);
		else if(peso1[p] > peso3[p])
			printf("perdeu %.2fKg em relacao ao primeiro mes.", peso1[p]-peso3[p]);
		else
			printf("permaneceu com o mesmo peso.");
	}
	printf("\n");	
	for(p = 0; p < 10; p++){
		if(peso1[p] == peso2[p] == peso3[p])
			printf("A cabra permaneceu com o mesmo peso em todos os meses.");
		else{
			printf("\nA %da cabra atingiu seu maior peso no ", p+1);
			
			if(peso1[p] > peso2[p] && peso1[p] > peso3[p])
				printf("primeiro mes.");
			else if(peso2[p] > peso1[p] && peso2[p] > peso3[p])			
				printf("segundo mes.");
			else if(peso3[p] > peso1[p] && peso3[p] > peso2[p])			
				printf("terceiro mes.");
				
			else if(peso1[p] == peso2[p])
				printf("primeiro e segundo mes.");
			else if(peso1[p] == peso3[p])
				printf("primeiro e terceiro mes.");
				
			else if(peso2[p] == peso1[p])
				printf("segundo e primeiro mes.");
			else if(peso2[p] == peso3[p])
				printf("segundo e terceiro mes.");
				
			else if(peso3[p] == peso1[p])
				printf("terceiro e primeiro mes.");
			else if(peso3[p] == peso2[p])
				printf("terceiro e segundo mes.");
		}
		
	}
	printf("\n");
	printf("\nO peso total do rebanho equivaleu a %.2fKg no fim do terceiro mes.", pesototal3);
	printf("\nA diferenca do peso total do rebanho entre o primeiro e o terceiro mes equivaleu a ");
	if(pesototal1 > pesototal3)
		printf("uma perda de %.2fKg\n.", pesototal1-pesototal3);
	else
		printf("um ganho de %.2fKg.\n", pesototal3-pesototal1);
}
