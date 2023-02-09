/*Programa para imprimir uma quantidade de asteriscos (*), passados por parâmetro,
na tela em situações de entrada de dados e saída.
O programa aqui irá solicitar do teclado 3 valores e realizar a média deles em uma função.
Exemplo de função com retorno e com parâmetro.*/

#include <stdio.h>

void imprime (int qtd);
float media (int n1, int n2, int n3);

int main (){
    int num1, num2, num3, qtd_ast;
    float med;
    
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
    med = media(num1, num2, num3);
    printf ("\n Media dos tres valores %f", med);
    printf ("\n");
    imprime(50);
}

float media (int n1, int n2, int n3){
   float calc_media;
   
   calc_media =  (float)(n1+n2+n3)/3;
   return calc_media;
}

void imprime (int qtd){
    for (int i = 0; i < qtd; i++){
        printf("*");
    }
}

