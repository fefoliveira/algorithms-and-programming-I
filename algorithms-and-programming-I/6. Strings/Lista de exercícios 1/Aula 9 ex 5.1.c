/*Faça um programa em C que receba uma frase, inverta a frase letra a letra,
da última para a primeira, e mostre esta frase ao final.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	int i;
	char frase[100], aux[100];
	
	puts("Digite uma frase: ");
	gets(frase);
	for(i = 0; i < strlen(frase); i++){
		aux[i] = frase[i];
	}
	for(i = 0; i < strlen(frase); i++){
		frase[i] = frase[strlen(frase)-i];
		frase[strlen(frase)-i] = aux[i];
	}
	for(i = 0; i < strlen(frase); i++){
		printf("%s", &frase);
	} 
}
