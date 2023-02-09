//Advinhe o número mágico (exemplo do pdf da aula 4):

#include <stdlib.h>
#include <stdio.h>
#include <time.h> //Biblioteca para manipulação de datas e horários de modo padrão.
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

/*O programa produz um número mágico usando o gerador de números aleatórios rand(), que
devolve um número arbitrário entre 0 e RAND_MAX. A função srand() evita que rand()
gere sempre o mesmo número aleatório, para tanto deve sempre utilizar uma semente
diferente. rand(), srand e RAND_MAX estão definidos na biblioteca stdlib.h. 

A função time() retorna a hora local em segundos e está definida na biblioteca time.h.*/
