#include<stdio.h>
main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num); //Lê um input int 
	printf("Valor lido = %d", num);  
}


/*
Formato dos "Comandos":

Declaração de variáveis
	tipo de dado    nome variável;
	ou
	tipo de dado    nome variável 1  ,  nome variável 2;
		
	printf("frase");
	ou
	printf("frase%tipo de dado", nome variável);
	
	scanf("%tipo", &nome variável);
*/
