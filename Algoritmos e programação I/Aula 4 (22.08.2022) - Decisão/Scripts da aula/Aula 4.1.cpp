#include <stdio.h>
int main()
{
    int num1, num2;
    printf("\nDigite o valor inteiro para o primeiro numero: ");
    scanf ("%d", &num1);
    num2 = num1;
    
    //Em tese: ++ em uma variável incrementa em 1 o valor de x.
    
    //Pós-incremento (x++):
    printf("\nValor para 5 * num1++: %d", 5 * num1++); //Aqui o incremento ocorre após a operação associada terminar.
	//Pré-incremento (++x):
	printf("\nValor para 5 * ++num1: %d", 5* ++num2); //Aqui o incremento ocorre antes da a operação associada terminar.
}


