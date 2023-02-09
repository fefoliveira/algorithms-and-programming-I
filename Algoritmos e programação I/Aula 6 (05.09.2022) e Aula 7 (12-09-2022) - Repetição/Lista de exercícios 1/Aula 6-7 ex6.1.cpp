/*Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e cresce 3 cent�metros por ano. 
Construa um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.*/

#include <stdio.h>

main(){
	int anos = 0;
	float h_chico = 1.5, h_ze = 1.1;
	
	while(h_ze <= h_chico){
		h_chico += 0.02;
		h_ze += 0.03;
		anos++;
	}
	printf("Foram necessarios %d anos para Ze ultrapassar a altura de Chico, ambos com %.2fm e %.2fm respectivamente.", anos, h_ze, h_chico);
}
