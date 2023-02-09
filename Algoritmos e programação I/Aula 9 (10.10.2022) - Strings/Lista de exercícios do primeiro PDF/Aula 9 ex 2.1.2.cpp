#include <stdio.h>
#include <string.h>
#include <conio.h> //Biblioteca que as vezes precisa pra usar o gets e o puts.
int main(){
	int i;
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	strupr(frase); //Era pra colocar toda a frase em maíusculas. Em compilador que é baseado em Linux isso nao funciona.
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U');
			frase[i] = '*';
	}
	for(i = 0; i < strlen(frase); i++){
		printf("%s", frase[i]);
	}
}
