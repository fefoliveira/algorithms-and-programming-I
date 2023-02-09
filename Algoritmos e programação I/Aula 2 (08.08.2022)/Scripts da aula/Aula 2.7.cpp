/*Tarefa: Faça um programa para somar o salário de 3 meses de uma pessoa. No final do programa você imprime a soma do salário do trimestre.
Na prática a pessoa pode aumentar ou diminuir o salário entre os meses.*/

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

