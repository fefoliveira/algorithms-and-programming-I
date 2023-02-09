/*Indique quais os valores atribuídos às variáveis p e k com a execução de cada uma das instruções de a) a j). 
Considere as instruções independentes (não são executadas sequencialmente) e que, para cada uma dessas instruções, as variáveis foram declaradas da seguinte forma:   
int p=5, k=3;
 
a)  p-= 25;         p=
b)  k = 20/5;       k=
c)  k = ++k;        k=
d)  k = p-- -2;     p=      k=
e)  p %= 2*2;       p=
f)  p=++k*5;        p=      k=
g)  k= p*3;         p=      k=
h)  k <= k >1;      k=
i)  p <=1;          p=
j)  p= p/k*10;      p=      k=      
*/

#include <stdio.h>
main()
{
	int p, k;
	p = 5;
	k = 3;
	printf("a) p -= 25 -> p = %d", p -= 25);
	printf("\nb) k = 20/5 -> k = %d", 20/5);
	printf("\nc) k = ++k -> k = %d", ++k);
	printf("\nd) k = p-- -2 -> p = %d, k = %d", p--, p-- -2);
	printf("\ne) p %= 2*2 -> p = %d", p %= 2*2);
	printf("\nf) p = ++k*5 -> p = %d, k = %d", ++k, ++k * 5);
	printf("\ng) k = p*3 -> k = %d, p = %d", p, p*3);
	printf("\nh) k <= k > 1 -> ");
	if (k <= k > 1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	printf("\ni) p <= 1 -> ");
	if (p <= 1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	printf("\nj) p = p/k*10 -> k = %d, p = %d", p/k*10, k);

}
