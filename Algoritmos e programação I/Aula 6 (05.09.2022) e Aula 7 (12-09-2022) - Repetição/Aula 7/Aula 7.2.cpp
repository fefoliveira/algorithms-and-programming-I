//Imprimir os 7 primeiros números inteiros iniciando em 1 (usando o while (iniciando com num = 0)).

#include <stdio.h>

main() {
	int num = 0;
	while(num < 7) {
		num++; //Incrementa o num antes do primeiro print, permitindo o num iniciar = 0
		printf("\n%d", num);
	}
}
