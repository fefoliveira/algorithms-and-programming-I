/*Seja o c�digo abaixo que recebe uma string e devolve uma c�pia da string com as letras 
min�sculas transformadas em mai�sculas:

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

(a) Crie uma nova fun��o que retorna o n�mero de letras, o n�mero de d�gitos e o
n�mero de s�mbolos contido na string de entrada. 
(b) Crie uma nova fun��o que retorna apenas as letras transformadas para mai�sculo,
descartando s�mbolos e d�gitos.
(c) Crie uma nova fun��o para substituir v�rios espa�os em brancos por apenas um.*/

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
