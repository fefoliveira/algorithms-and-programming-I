/*Programa para imprimir 30 asteriscos (*) na tela em situações de entrada de dados e saída.
O programa irá solicitar do teclado 3 valores e realizar a média deles.
Exemplo de função sem retorno (void) e sem parâmetro.*/

#include <stdio.h>
void imprime();

int main(){
    int num1, num2, num3;
    
    imprime();
    printf("\nInforme o valor 1 ");
    scanf("%d", &num1);
    imprime();
    printf("\n");
    imprime();
    printf("\nInforme o valor 2 ");
    scanf("%d", &num2);
    imprime();
    printf("\n");    
    imprime();
    printf("\nInforme o valor 3 ");
    scanf("%d", &num3);
    imprime();
    printf("\n\n");
    imprime();
    printf("\nMedia dos tres valores %f", (float)(num1+num2+num3)/3);
    printf("\n");
    imprime();
}

void imprime(){
    for (int i = 0; i < 30; i++){
        printf("*");
    }
}

