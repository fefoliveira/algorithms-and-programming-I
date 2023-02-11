/*Um objeto, que se encontra inicialmente em repouso é sujeito a uma força que lhe provoca uma aceleração a de valor constante.
O espaço percorrido s por esse objeto num espaço de tempo t é dado pela seguinte equação:
s = (a*pow(t, 2))/2
Construa um programa que pergunte os valores da aceleração e do tempo e apresente, como resultado, o valor do espaço percorrido.*/

#include <stdio.h>
#include <math.h>
main()
{
	float a, t;
	printf("Digite o valor da aceleracao (m/s2): ");
	scanf("%f", &a);
	printf("Digite o valor do tempo (s): ");
	scanf("%f", &t);
	printf("O espaco percorrido foi de %.2fm.", (a*pow(t, 2))/2);
}
