/*Programa para imprimir uma quantidade de asteriscos (*), passados por par�metro,
na tela em situa��es de entrada de dados e sa�da.
O programa aqui ir� solicitar do teclado 3 valores e realizar a m�dia deles.
Exemplo de fun��o sem retorno (void) e com par�metro.*/

#include <stdio.h>

void imprime (int qtd);

int main (){
    int num1, num2, num3, qtd_ast;
    
    printf ("Informe a quantidade de asteriscos que quer imprimir");
    scanf ("%d", &qtd_ast);
    printf ("\n");
    imprime(qtd_ast);
    printf ("\n Informe o valor 1 ");
    scanf ("%d", &num1);
    imprime(qtd_ast);
    printf ("\n");
    imprime(qtd_ast);
    printf ("\n Informe o valor 2 ");
    scanf ("%d", &num2);
    imprime(qtd_ast);
    printf ("\n");    
    imprime(qtd_ast);
    printf ("\n Informe o valor 3 ");
    scanf ("%d", &num3);
    imprime(qtd_ast);
    printf ("\n\n");
    imprime(50);
    printf ("\n Media dos tres valores %f", (float)(num1+num2+num3)/3);
    printf ("\n");
    imprime(50);
}

void imprime (int qtd){
    for (int i = 0; i < qtd; i++){
        printf("*");
    }
}

