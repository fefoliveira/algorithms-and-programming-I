/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero.
A função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.*/

#include <stdio.h>

int funcao(int x);

int main(){
	int valor, retorno;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	printf("\n");
	retorno = funcao(valor);
	printf("%d.", retorno);
}

int funcao(int x){
	int retorno;
	if(x == 0)
		retorno = 0;
	else if(x > 0)
		retorno = 1;
	else if(x < 0)
		retorno = -1;
	return retorno;
}
