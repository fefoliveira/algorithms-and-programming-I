/*Codifique um programa que recebe uma string e substitui cada letra pela letra seguinte
circularmente (A � substitu�do por B, � e Z � substituido por A).
Escreva fun��es para codificar e decodificar strings.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	int i;
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	for(i = 0; i <= strlen(frase); i++){
		if(frase[i] == 'a' || frase[i] == 'A')
			frase[i] = 'b';
		else if(frase[i] == 'b' || frase[i] == 'B')
			frase[i] = 'c';
			
		//...Contiua at� cobrir o alfabeto inteiro...
		
		else if(frase[i] == 'z' || frase[i] == 'Z')
			frase[i] = 'a';
	}
	for(i = 0; i <= strlen(frase); i++){
		printf("%s", frase[i]);
	}
}
