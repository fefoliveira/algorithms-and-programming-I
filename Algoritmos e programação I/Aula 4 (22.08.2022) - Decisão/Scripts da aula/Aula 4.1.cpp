#include <stdio.h>
int main()
{
    int num1, num2;
    printf("\nDigite o valor inteiro para o primeiro numero: ");
    scanf ("%d", &num1);
    num2 = num1;
    
    //Em tese: ++ em uma vari�vel incrementa em 1 o valor de x.
    
    //P�s-incremento (x++):
    printf("\nValor para 5 * num1++: %d", 5 * num1++); //Aqui o incremento ocorre ap�s a opera��o associada terminar.
	//Pr�-incremento (++x):
	printf("\nValor para 5 * ++num1: %d", 5* ++num2); //Aqui o incremento ocorre antes da a opera��o associada terminar.
}


