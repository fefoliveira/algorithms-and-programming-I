/*Elabore um programa que leia o nome e o sobrenome de uma pessoa em strings individuais. 
Posteriormente informe a quantidade de letras do nome e do sobrenome. 
Além disso junte o nome com o sobrenome em uma terceira string chamada nome completo e informe a quantidade de 
letras desta string. */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void imprimir(char str[]);
int letras(char str[], int qtd);

int main(){
	int i, qtd_letras_nome, qtd_letras_sobrenome, qtd_letras_completo;
	char nome[100], sobrenome[100], completo[200];
	
	printf("Digite seu nome: ");
	gets(nome);
	qtd_letras_nome = strlen(nome);
	qtd_letras_nome = letras(nome, qtd_letras_nome);
	
	printf("Digite seu sobrenome: ");
	gets(sobrenome);
	qtd_letras_sobrenome = strlen(sobrenome);
	qtd_letras_sobrenome = letras(sobrenome, qtd_letras_sobrenome);
	
	printf("O seu nome possui %d letras, e seu sobrenome %d.", qtd_letras_nome, qtd_letras_sobrenome);
	
	for(i = 0; i <= strlen(nome); i++){
		completo[i] = nome[i];
	}
	
	completo[strlen(completo)] = ' ';
	strcat(completo, sobrenome);
	
	qtd_letras_completo = strlen(completo);
	qtd_letras_completo = letras(completo, qtd_letras_completo);
	
	printf("\nSeu nome completo e ");
	imprimir(completo);	
	printf(" e ele possui %d letras.", qtd_letras_completo);
}

void imprimir(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		printf("%c", str[i]);
		i++;
	}
}

int letras(char str[], int qtd){
	int i = 0;
	for(i = 0; i < strlen(str); i++){
		if(str[i] == ' ')
			qtd--;
	}
	return qtd;
}
