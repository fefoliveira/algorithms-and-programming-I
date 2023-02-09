/*Faça um programa em C que se comporte como um vírus. 
Este programa irá duplicar as palavras digitadas em uma frase.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	int i, j, k;
	char frase[100], duplicada[200];
	
	puts("Digite uma frase: ");
	gets(frase);
	frase[strlen(frase)+1] = ' '; //Adiciona um espaço no final da string pra conseguir detectar a última palavra.
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == ' '){
			for(j = 0; j <= i; j++){ //Copia a palavra em sua primeira vez.
				duplicada[j] = frase[j];
			}
			for(k = i+1, j = 0; k <= i*2+1; k++, j++){ //Duplica a palavra do lado da que recem foi copiada.
				duplicada[k] = frase[j]; 
			}
		}
	}
	for(i = 0; i < strlen(duplicada); i++){
		printf("%s", duplicada[i]);
	}
}
