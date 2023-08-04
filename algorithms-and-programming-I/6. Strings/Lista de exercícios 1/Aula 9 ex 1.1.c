/*Faça um programa em C que receba uma frase qualquer fornecida pelo 
usuário, calcule e mostre quantas palavras a frase possui.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	char frase[100];
	int cont = 0, i;
	
	puts("Digite uma frase: "); //Substitui o printf.
	gets(frase); //Substitui o scanf.
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == ' ')
			cont++;
	}
	printf("\nA frase tem %d palavras e %d letras.", cont+1, strlen(frase)-cont);
}
