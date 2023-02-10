#include <stdio.o>
int main(){
	int idade[15], i, soma = 0; //Declaração de um vetor.
	
	for(i = 0; i < 15; i++){ //O for é o melhor tipo de laço pra trabalhar com vetores.
		printf("/nDigite a idade do primo %d: ", i+1);
		scanf("%d", %idade[i]);
		while(idade[i] < 0);{
			printf("/nDigite a idade do primo %d: ", i+1);
			scanf("%d", %idade[i]);
		}
		soma += idade[i];
	}
	printf("A media das idades dos primos corresponde a: %.2f", (float))soma/15;	
}
