#include <stdio.o>
#define tam(15); //Isso � a cria��o de uma constante que n�o muda ao longo do programa. Toda ao inves de usar [15] nos vetores, pode-se usar [tam] (tam no caso refere-se a tamanho).
int main(){
	int idade[tam], i, soma = 0; //Declara��o de um vetor.
	
	for(i = 0; i < tam; i++){ //O for � o melhor tipo de la�o pra trabalhar com vetores.
		printf("/nDigite a idade do primo %d: ", i+1);
		scanf("%d", %idade[i]);
		while(idade[i] < 0);{
			printf("/nDigite a idade do primo %d: ", i+1);
			scanf("%d", %idade[i]);
		}
		soma += idade[i];
	}
	printf("A media das idades dos primos corresponde a: %.2f", (float))soma/tam;	
}
