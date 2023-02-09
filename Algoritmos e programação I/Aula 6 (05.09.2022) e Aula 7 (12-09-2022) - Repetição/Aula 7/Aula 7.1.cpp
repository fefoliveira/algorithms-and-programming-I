//Imprimir os 7 primeiros números inteiros iniciando em 1 (usando o while (iniciando com num = 1)).

#include <stdio.h>

main() {
	int num = 1;
	while(num < 8) {
		printf("\n%d", num);
		num++; //Incrementa o num depois do primeiro print, obrigando o num iniciar != 0
	}
}


