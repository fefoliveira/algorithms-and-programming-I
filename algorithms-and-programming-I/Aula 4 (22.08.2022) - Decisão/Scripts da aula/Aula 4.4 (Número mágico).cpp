//Advinhe o n�mero m�gico (exemplo do pdf da aula 4):

#include <stdlib.h>
#include <stdio.h>
#include <time.h> //Biblioteca para manipula��o de datas e hor�rios de modo padr�o.
main()
{
 int magico, palpite;
 srand((unsigned) time(NULL));
 magico = rand()%10;
 printf("\nAdivinhe o numero magico [0-9]: ");
 scanf("%d", &palpite);
 if( palpite == magico )
 	printf("Certo! ");
 else
	{
	printf("Errado! ");
	printf("O numero magico eh: %d\n", magico);
	}
}

/*O programa produz um n�mero m�gico usando o gerador de n�meros aleat�rios rand(), que
devolve um n�mero arbitr�rio entre 0 e RAND_MAX. A fun��o srand() evita que rand()
gere sempre o mesmo n�mero aleat�rio, para tanto deve sempre utilizar uma semente
diferente. rand(), srand e RAND_MAX est�o definidos na biblioteca stdlib.h. 

A fun��o time() retorna a hora local em segundos e est� definida na biblioteca time.h.*/
