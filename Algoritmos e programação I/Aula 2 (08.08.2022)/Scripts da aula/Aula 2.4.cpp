#include<stdio.h>
main()
{
	int num1, cont = 0, num2, soma; //Inicia-se o contador em 0, para que o numero se some posteriormente.
	
	printf("Informe um valor para o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe um valor para segundo numero: ");
	scanf("%d", &num2);
	
	soma = num1+num2;
	
	printf("O valor %d somado ao valor %d e igual a %d", num1, num2, soma);
	cont = cont+1; //Adiciona +1 no contador
	printf("\nO valor de cont e igual a %d", cont);
	cont = 0; //Redefine o valor de cont para 0
	cont++; //Adiciona +1 no cont
	printf("\nO valor de cont e igual a %d", cont);
	cont--; //-1 no cont
	printf("\nO valor de cont e igual a %d", cont);
	cont = 0;
	cont += 5; //Usar o "+= x" é a mesma coisa que suar o "cont = cont + x"
	printf("\nO valor de cont e igual a %d", cont);
}

/* 
Cuidado com cont++ e ++cont:
cont = 0
	cont++ = 0? Não (pois ele adicionou 1) 
	++cont = 0? Sim (pois ele le primeiro o valor de cont pra depois adicionar o 1)
*/
