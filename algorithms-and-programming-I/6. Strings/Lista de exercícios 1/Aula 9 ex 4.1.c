/*Faça um programa em C que receba uma frase do usuário e mostre a frase,
palavra por palavra, uma em cada linha diferente.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	char frase[100]; 
	int i;
	
	puts("Digite uma frase: ");
	gets(frase);
	for(i = 0;  i < strlen(frase); i++){
		if(frase[i] = ' ')
			printf("\n");
		else
			printf("%s", frase[i]);
	}
}
