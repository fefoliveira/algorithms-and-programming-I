//Código com os valores de entrada:
#include <stdio.h>
#include <math.h>
main()
{
	float raio, altura, area, litros, rendimento, preco, litros_p_lata;
	int latas;
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	printf("Digite o rendimento do litro de tinta(m2/L): ");
	scanf("%f", &rendimento);
	printf("Digite quantos litros tem em uma lata de tinta: ");
	scanf("%f", &litros_p_lata);
	printf("Digite o preco da lata: R$");
	scanf("%f", &preco);
	area = 3.14*pow(raio, 2)+2*3.14*raio*altura;
	litros = area/rendimento;
	latas = ceil(litros/litros_p_lata); //ceil() arredonda o num pra cima
	printf("Esse cilindro tem uma area de %.2f metros quadrados e voce vai precisar de %d de latas para pintar o cilindro, elas vao custar R$%d.", area, latas, latas*20);
}
