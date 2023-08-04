/*Escreva um programa que funciona como o jogo da forca. O usuário tenta acertar uma palavra
(contida numa variável) usando 5 tentativas. A palavra é mostrada ao usuário com as letras
marcadas com o símbolo '*'. O usuário deve digitar uma letra (sem acentos, til, trema) e caso a
letra esteja correta, o símbolo '*' é substituído pela letra. Se o usuário não montar a palavra até
a quinta tentativa, o jogo acaba em derrota.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	int repete = 1, i, j, k;
	char palavra[] = "casa", ast[100], letra;
	
	for(i = 0; i < strlen(palavra); i++){
		ast[i] = '*';
	}
	for(i = 0; i <= 5; i++){
		printf("JOGO DA FORCA \n");
		for(j = 0; j < strlen(palavra); j++){
			printf("%s", ast[i]);
		}
		printf("\nChute uma letra (voce tem %d tentativas): ", 5-i);
		scanf("%s", &letra);
		for(k = 0; k < strlen(palavra); k++){
			if(palavra[k] == letra)
				ast[k] = palavra[k];
		}
	}

}
