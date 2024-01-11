//Faça um programa que lê uma string e retorna a string invertida.

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	int i;
	char frase[100], copia[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	for(i = 0; i <= strlen(frase); i++){
		copia[i] = frase[i];
	}
	for(i = 0; i <= strlen(frase); i++){
		frase[i] = frase[strlen(frase)-i];
		frase[strlen(frase)-i] = copia[i];
	}
	for(i = 0; i <= strlen(frase); i++){
		printf("%s", frase);		
	}
}
