/*Tarefa: Fa�a um programa para somar o sal�rio de 3 meses de uma pessoa. No final do programa voc� imprime a soma do sal�rio do trimestre.
Na pr�tica a pessoa pode aumentar ou diminuir o sal�rio entre os meses.*/

#include<stdio.h>
main()
{
    float sal1, sal2, sal3, soma;
    printf("Qual o seu primeiro salario? R$");
    scanf("%f", &sal1);
    printf("Qual o seu segundo salario? R$");
    scanf("%f", &sal2);
    printf("Qual o seu terceiro salario? R$");
    scanf("%f", &sal3);
    soma = sal1+sal2+sal3;
    printf("Voce teve como salario total no trimestre o valor de R$%2.f.", soma);
}

