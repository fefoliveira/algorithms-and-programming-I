/*Programa para imprimir uma quantidade de asperiscos (*), passados por par�metro,
na tela em situa��es de entrada de dados e sa�da.
O programa aqui ir� solicitar do teclado 3 valores e realizar a m�dia deles em uma fun��o.
Exemplo de fun��o com retorno e sem par�metro.*/

#include <stdio.h>

void imprime (int qtd);
float media ();

int main (){
    int qtd_ast;
    printf ("Informe a quantidade de asteriscos que quer imprimir");
    scanf ("%d", &qtd_ast);
    printf ("\n");
    imprime (qtd_ast);
    printf ("\nMedia dos tres valores %f ", media());
    printf ("\n");
    imprime(qtd_ast);
}

float media (){
   int num1,  num2, num3, quantidade;
   float med;
    printf ("\nInforme a quantidade de asteriscos que quer imprimir na entrada");
    scanf ("%d", &quantidade);
    imprime(quantidade);
    printf ("\n Informe o valor 1 ");
    scanf ("%d", &num1);
    imprime(quantidade);
    printf ("\n");
    imprime(quantidade);
    printf ("\n Informe o valor 2 ");
    scanf ("%d", &num2);
    imprime(quantidade);
    printf ("\n");    
    imprime(quantidade);
    printf ("\n Informe o valor 3 ");
    scanf ("%d", &num3);
    imprime(quantidade);
    med = (float)(num1+num2+num3)/3;
    return med;
    
}

void imprime (int qtd){
    for (int i = 0; i < qtd; i++){
        printf("*");
    }
}

