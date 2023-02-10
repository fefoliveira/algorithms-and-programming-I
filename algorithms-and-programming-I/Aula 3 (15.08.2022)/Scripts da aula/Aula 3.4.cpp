/* Construa um programa que calcule a quantidade de latas de tinta necess�rias e o custo para pintar tanques cil�ndricos de combust�vel, onde s�o fornecidos a altura e o raio desse cilindro.
Sabendo que:
- a lata de tinta custa R$20,00
- cada lata cont�m 5 litros
- cada litro de tinta pinta 3 metros quadrados.
Sabendo que:
�rea do cilindro = 3.14*pow(raio, 2)+2*3.14*raio*altura e que raio e altura s�o dados de entrada cilindro.*/

//C�digo com os valores do enunciado:
#include <stdio.h>
#include <math.h>
main()
{
	float raio, altura, area, litros;
	int latas;
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	area = 3.14*pow(raio, 2)+2*3.14*raio*altura;
	litros = area/3;
	latas = ceil(litros/5); //ceil() arredonda o num pra cima
	printf("Esse cilindro tem uma area de %.2f metros quadrados e voce vai precisar de %d de latas para pintar o cilindro, elas vao custar R$%d.", area, latas, latas*20);
}
