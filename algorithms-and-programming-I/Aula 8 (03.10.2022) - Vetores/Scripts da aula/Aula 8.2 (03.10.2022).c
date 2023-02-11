#include <stdio.o>
#define tam(15); //Isso é a criação de uma constante que não muda ao longo do programa. Toda ao inves de usar [15] nos vetores, pode-se usar [tam] (tam no caso refere-se a tamanho).
int main(){
	int idade[tam], i, soma = 0; //Declaração de um vetor.
	
	for(i = 0; i < tam; i++){ //O for é o melhor tipo de laço pra trabalhar com vetores.
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
