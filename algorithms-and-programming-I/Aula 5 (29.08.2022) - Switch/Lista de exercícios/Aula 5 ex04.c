/*Dado o valor do produto e a forma de pagamento. 1 = à vista; 2 = à prazo.
Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o valor final, senão informe o mesmo 
valor do produto.*/

#include <stdio.h>

main()
{
	float valor;
	int pag;
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	printf("Informe a forma de pagamento: \n[1] A vista \n[2] A prazo \n");
	scanf("%d", &pag);
	switch (pag)
	{
				case 1:
			printf("Voce recebou um desconto de 10%! O valor final da sua compra ficou em R$%.2f.", valor-(valor*0.1));
			break;
		case 2:
			printf("O valor final da sua compra ficou em R$%.2f.", valor);
			break;
	}
}
