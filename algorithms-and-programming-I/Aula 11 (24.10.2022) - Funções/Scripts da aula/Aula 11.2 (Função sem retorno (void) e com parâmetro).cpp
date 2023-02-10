/*Programa para imprimir uma quantidade de asteriscos (*), passados por parâmetro,
na tela em situações de entrada de dados e saída.
O programa aqui irá solicitar do teclado 3 valores e realizar a média deles.
Exemplo de função sem retorno (void) e com parâmetro.*/

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

