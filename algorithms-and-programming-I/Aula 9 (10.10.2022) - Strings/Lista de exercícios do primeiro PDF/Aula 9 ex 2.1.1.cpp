/*Faça um progrma em C que receba uma frase e troque as vogais existentes nesta frase por um asterisco (*). 
Por exemplo: Frase “EU ESTOU NA ESCOLA” resultado na tela “** *ST** N* *SC*L**/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	int i;
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'E' || frase[i] == 'e' || frase[i] == 'I' || frase[i] == 'i' || frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'U' || frase[i] == 'u');
			frase[i] = '*';
	}
	for(i = 0; i < strlen(frase); i++){
		printf("%s", frase[i]);
	}
}
