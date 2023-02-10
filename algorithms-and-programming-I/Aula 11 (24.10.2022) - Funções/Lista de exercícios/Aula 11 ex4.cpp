/*Faça um programa que implementa uma função que recebe, por parâmetro, a hora de início e a hora de término de um
jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O procedimento deve retornar, também por 
parâmetro,a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas 
e que o jogo pode começar em um dia e terminar no outro.*/

#include <stdio.h>

float funcao(int x1, int y1, int x2, int y2);

int main(){
	int h_inicio, m_inicio, h_fim, m_fim;
	float duracao, h_duracao, m_duracao;
	
	printf("Digite a quantidade de horas do inicio do jogo (formato 24h): ");
	scanf("%d", &h_inicio);
	while(h_inicio < 0 || h_inicio > 23){
		printf("Invalido! Digite novamente a quantidade de horas do inicio do jogo (formato 24h): ");
		scanf("%d", &h_inicio);
	}
	printf("Digite a quantidade de minutos do inicio do jogo (formato 24h): ");
	scanf("%d", &m_inicio);
	while(m_inicio < 0 || m_inicio > 59){
		printf("Invalido! Digite novamente a quantidade de horas do inicio do jogo (formato 24h): ");
		scanf("%d", &m_inicio);
	}
	
	printf("\n");
	
	printf("Digite a quantidade de horas do termino do jogo (formato 24h): ");
	scanf("%d", &h_fim);
	while(h_fim < 0 || h_fim > 23){
		printf("Invalido! Digite novamente a quantidade de horas do inicio do jogo (formato 24h): ");
		scanf("%d", &h_fim);
	}
	printf("Digite a quantidade de minutos do termino do jogo (formato 24h): ");
	scanf("%d", &m_fim);
	while(m_fim < 0 || m_fim > 59){
		printf("Invalido! Digite novamente a quantidade de horas do termino do jogo (formato 24h): ");
		scanf("%d", &m_fim);
	}
	
	duracao = funcao(h_inicio, m_inicio, h_fim, m_fim);
	h_duracao = (int)duracao;
	m_duracao = (duracao-h_duracao)*60;
	
	printf("\nO jogo durou %d horas e %d minutos.", (int)h_duracao, (int)m_duracao);
}

float funcao(int x1, int y1, int x2, int y2){
	float hora, min, duracao;
	hora = x2-x1;
	if(x2 < x1)
		hora += 24;
	min = y2-y1;
	duracao = hora+(min/60);
	return duracao;
}
