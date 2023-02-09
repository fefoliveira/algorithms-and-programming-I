/*Elabore um programa que leia do teclado o valor de uma string, posteriormente crie uma outra string com o conteúdo
da primeira juntamente coma a informação "(copia)"*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	int i = 0;
	char str[100], copia[] = "(Copia)", nova[108];
	
	printf("Digite uma frase: ");
	gets(str);
	str[strlen(str)] = ' ';
	for(i = 0; i < strlen(str); i++){
		nova[i] = str[i];
	}
	strcat(nova, copia);
	puts(nova);
}
