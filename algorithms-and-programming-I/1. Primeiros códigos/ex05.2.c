/*Um objeto, que se encontra inicialmente em repouso � sujeito a uma for�a que lhe provoca uma acelera��o a de valor constante.
O espa�o percorrido s por esse objeto num espa�o de tempo t � dado pela seguinte equa��o:
s = (a*pow(t, 2))/2
Construa um programa que pergunte os valores da acelera��o e do tempo e apresente, como resultado, o valor do espa�o percorrido.*/

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
