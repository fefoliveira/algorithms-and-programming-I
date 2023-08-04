/*Seja o código abaixo que recebe uma string e devolve uma cópia da string com as letras 
minúsculas transformadas em maiúsculas:

#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
char *copia(char *s);
main(){
	char str[81];
	char *str1;
	printf("digite uma linha \n");
	scanf("%80[^\n]",str);
	str1 = copia(str);
	printf("\nNova linha: %s",str1);
}
char *copia(char *s){
	int i;
	for(i=0;s[i]!='\0';i++)
	s[i]=toupper(s[i]);
	char *t=(char *)malloc(strlen(s)+1);
	strcpy(t,s);
	return t;
}

(a) Crie uma nova função que retorna o número de letras, o número de dígitos e o
número de símbolos contido na string de entrada. 
(b) Crie uma nova função que retorna apenas as letras transformadas para maiúsculo,
descartando símbolos e dígitos.
(c) Crie uma nova função para substituir vários espaços em brancos por apenas um.*/

#include <stdio.h>
#include <malloc.h>
#include <ctype.h>

char *copia(char *s);

main(){
	char str[81];
	char *str1;
	printf("digite uma linha \n");
	scanf("%80[^\n]",str);
	str1 = copia(str);
	printf("\nNova linha: %s",str1);
}

char *copia(char *s){
	int i;
	for(i=0;s[i]!='\0';i++)
	s[i]=toupper(s[i]);
	char *t=(char *)malloc(strlen(s)+1);
	strcpy(t,s);
	return t;
}
