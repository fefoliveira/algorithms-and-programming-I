//Imprimir os 7 primeiros n�meros inteiros iniciando em 1 (usando o do-while).

#include <stdio.h>

main() {
	int num = 1;
	do {
		printf("\n%d", num);
		num++;
	}
	while(num < 8); {//Do-while faz o while levar v�rgula porque o while � a parte composta da fun��o.
	}
}
