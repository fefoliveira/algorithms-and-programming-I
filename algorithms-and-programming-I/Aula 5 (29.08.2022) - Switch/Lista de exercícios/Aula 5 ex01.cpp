/*Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. 
Faça um programa que calcule o valor total a ser pago por uma pessoa. 
O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/

#include <stdio.h>
main()
{
	int op;
	float compra;
	printf("Qual o valor da sua compra? ");
	scanf("%f", &compra);
	if (compra <= 0)
	{
		printf("ERRO! Insira um valor valido para a compra... \n");
		main();
	}
	printf("Qual tipo de cliente voce e? \n[1] Cliente comum \n[2] Funcionario \n[3] Cliente VIP \n");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			printf("Infelizmente nao foi aplicado nenhum desconto. O valor final de sua compra ficou em R$%.2f", compra);
			break;
		case 2:
			printf("Foi aplicado um desconto de 10p/cento. O valor final de sua compra ficou em R$%.2f", compra-(compra*0,10));
			break;
		case 3:
			printf("Foi aplicado um desconto de 5p/cento. O valor final de sua compra ficou em R$%.2f", compra-(compra*0,05));
			break;
		default:
			printf("ERRO! Insira uma opcao valida... \n");
			main();
	}
}
