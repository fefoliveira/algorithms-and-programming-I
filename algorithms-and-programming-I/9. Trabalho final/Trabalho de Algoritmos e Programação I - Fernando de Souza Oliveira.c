#include <stdio.h>

int menu_inicial(); //Fun��o usada para simplificar o uso do menu inicial que obriga o cadastro dos primeiros metais, e de sua valida��o.
int menu(); //Fun��o usada para simplificar o uso do menu de controle e de sua valida��o.
int grade(int t0, int t1, int t2, int t3, int t4, int q0, int q1, int q2, int q3, int q4); //Fun��o usada para apresentar uma tabela completa do estoque com o intuito de guiar a escolha do usu�rio nas op��es 2 e 7.

int main(){
	//Declara��o de vari�veis:
	int op_inicial, op, i, tipo[5], qtd[5], remove, escolhe_tipo, troca_qtd, nova_qtd;
	int loop = 1, qtd_chapa1 = 0, qtd_chapa2 = 0, qtd_chapa3 = 0, qtd_total = 0, cont_loop = 0;
	float qtd_metros = 0;
	
	//O primeiro cadastro de metais � obrigat�rio antes de ter acesso ao menu completo.
	op_inicial = menu_inicial(); //Uso da fun��o que apresenta o menu inicial.
	switch(op_inicial){ //Switch case que apenas cadastra os primeiros metais OU finalizar o programa.
		case 1:
			for(i = 0; i <= 4; i++){
				printf("\nInforme o tipo do metal %d: \n[1] 140cm \n[2] 80cm \n[3] 50cm \n[0] Nenhum \n", i);		
				scanf("%d", &tipo[i]);
				while(tipo[i] < 0 || tipo[i] > 3){ //Valida��o da escolha do tipo do respectivo c�digo.
					printf("Invalido! Informe novamente o tipo do metal %d: \n[1] 140cm \n[2] 80cm \n[3] 50cm \n[0] Nenhum \n", i);	
					scanf("%d", &tipo[i]);
				}	
				if(tipo[i] != 0){
					printf("\nInforme a quantidade do metal %d: ", i);		
					scanf("%d", &qtd[i]);
					while(qtd[i] < 0){ //Valida��o da quantidade de chapas do respectivo c�digo.
						printf("Invalido! Informe novamente a quantidade do metal %d: ", i);	
						scanf("%d", &qtd[i]);
					}
					qtd_total += qtd[i]; //Incrementador da quantia total de chapas no estoque.
				}
				if(tipo[i] == 0)
					qtd[i] = 0; //Se o tipo indicado for 0, o programa assume que esse c�digo tambem n�o tem quantidade, acaba sendo um espa�o inocupado no estoque.			
				else if(tipo[i] == 1){
					qtd_chapa1 += qtd[i]; //Incrementador da quantia de chapas do tipo 1.
					qtd_metros += (3*1.4)*qtd[i]; //Incrementador da quantia total de metros quadrados do estoque (se nas outras escolhas de tipo).
				}
				else if(tipo[i] == 2){
					qtd_chapa2 += qtd[i]; //Incrementador da quantia de chapas do tipo 2.
					qtd_metros += (2.5*0.8)*qtd[i];
				}
				else if(tipo[i] == 3){
					qtd_chapa3 += qtd[i]; //Incrementador da quantia de chapas do tipo 3.
					qtd_metros += (6*0.5)*qtd[i];
				}

			}
			break;
		case 8: //Fim do loop que posteriormente iria repetir o menu completo a cada termino de opera��o. Portanto o fim do programa.
			printf("\nFim do programa.");
			loop = 0;
	}

	while(loop){ //While que vai repetir o menu de op��es a cada termino de uma fun��o escolhida, at� que seja digitado a op��o 8 (fim do programa).
		op = menu(); //Uso da fun��o que disp�e o menu completo de op��es.
		switch(op){ //Switch case que executa todas as funcionalidades do programa.
			case 1: //Cadastro em c�digos vazios: se um c�digo n�o possui cadastro, ent�o pode-se cadastrar um metal nesse c�digo vazio atrav�s desse case.
				if(tipo[0] != 0 && tipo[1] != 0 && tipo[2] != 0 && tipo[3] != 0 && tipo[4] != 0) //Valida��o de um poss�vel estoque completo.
					printf("\nTodos os cadastros foram feitos, remova algum cadastro ja feito para o sobrepor. \n");
				else{ //Se o algum c�digo estiver vazio, a valida��o permite que ele seja cadastrado.
					for(i = 0; i <= 4; i++){ //Tentei usar uma fun��o para n�o precisar copiar e colar o cadastro inicial, porem, conforme a professora disse, uma fun��o n�o retorna um vetor, ent�o o uso da fun��o n�o me foi �til nessa situa��o.
						if(tipo[i] == 0){
							printf("\nNao existe um metal cadastrado no codigo %d, por favor, cadastre-o.", i);
							printf("\nInforme o tipo do metal %d: \n[1] 140cm \n[2] 80cm \n[3] 50cm \n[0] Nenhum \n", i);		
							scanf("%d", &tipo[i]);
							while(tipo[i] < 0 || tipo[i] > 3){ //Valida��o da escolha do tipo do respectivo c�digo.
								printf("Invalido! Informe novamente o tipo do metal %d: \n[1] 140cm \n[2] 80cm \n[3] 50cm \n[0] Nenhum \n", i);	
								scanf("%d", &tipo[i]);
							}
							if(tipo[i] != 0){
								printf("\nInforme a quantidade do metal %d: ", i);		
								scanf("%d", &qtd[i]);
								while(qtd[i] < 0){ //Valida��o da quantidade de chapas do respectivo c�digo.
									printf("Invalido! Informe novamente a quantidade do metal %d: ", i);	
									scanf("%d", &qtd[i]);
								}
								qtd_total += qtd[i]; //Incrementador da quantia total de chapas no estoque.
								if(tipo[i] == 0)
									qtd[i] = 0;	//Se o tipo indicado for 0, o programa assume que esse c�digo tambem n�o tem quantidade, acaba sendo um espa�o inocupado no estoque.						
								else if(tipo[i] == 1){
									qtd_chapa1 += qtd[i]; //Incrementador da quantia de chapas do tipo 1.
									qtd_metros += (3*1.4)*qtd[i]; //Incrementador da quantia total de metros quadrados do estoque (se nas outras escolhas de tipo).
								}
								else if(tipo[i] == 2){
									qtd_chapa2 += qtd[i]; //Incrementador da quantia de chapas do tipo 2.
									qtd_metros += (2.5*0.8)*qtd[i];
								}
								else if(tipo[i] == 3){
									qtd_chapa3 += qtd[i]; //Incrementador da quantia de chapas do tipo 3.
									qtd_metros += (6*0.5)*qtd[i];
								}
							}						
						}
					}
				}
				break;
			case 2: //Remo��o do cadastro de um metal escolhido.
				grade(tipo[0], tipo[1], tipo[2], tipo[3], tipo[4], qtd[0], qtd[1], qtd[2], qtd[3], qtd[4]);
				printf("\nInforme o codigo do metal que deseja remover: ");
				scanf("%d", &remove);
				while(remove < 0 || remove > 4){ //Valida��o do c�digo escolhido para a remo��o
					printf("Invalido! Informe novamente o codigo do metal que deseja remover: ");
					scanf("%d", &remove);
				}
				if(tipo[remove] == 0)
					printf("Nao existe metal associado a esse codigo. \n");
				else{ //Diminui��o da quantia total de chapas por tipo E da quantia total de metros quadrados.
					qtd_total -= qtd[remove]; //Diminui��o da quantia total de chapas.
					if(tipo[remove] == 1){
						qtd_chapa1 -= qtd[remove];
						qtd_metros -= (3*1.4)*qtd[remove];
					}
					else if(tipo[remove] == 2){
						qtd_chapa2 -= qtd[remove];
						qtd_metros -= (2.5*0.8)*qtd[remove];
					}
					else if(tipo[remove] == 3){
						qtd_chapa3 -= qtd[remove];
						qtd_metros -= (6*0.5)*qtd[remove];
					}
					switch(remove){ //Remo��o dos metais dos c�digos escolhigos atrav�s do zeramento de seus tipos e quantidades.
						case 0: 
							tipo[0] = 0;
							qtd[0] = 0;
							break;
						case 1: 
							tipo[1] = 0;
							qtd[1] = 0;
							break;	
						case 2: 
							tipo[2] = 0;
							qtd[2] = 0;
							break;
						case 3: 
							tipo[3] = 0;
							qtd[3] = 0;
							break;
						case 4: 
							tipo[4] = 0;
							qtd[4] = 0;
							break;
					}
					printf("Metal removido com sucesso. \n");
				}
				break;
			case 3: //Vizualiza��o da quantidade de chapas estocadas no tipo escolhido.
				printf("\nInforme o tipo que deseja ver a quantidade: ");
				scanf("%d", &escolhe_tipo);
				while(escolhe_tipo < 1 || escolhe_tipo > 3){ //Valida��o do tipo escolhido.
					printf("\nInvalido! Informe novamente o tipo que deseja ver a quantidade: ");
					scanf("%d", &escolhe_tipo);
				}
				switch(escolhe_tipo){
					case 1: 
						printf("\nForam estocadas %d chapas do tipo 1. \n", qtd_chapa1);
						break;	
					case 2: 
						printf("\nForam estocadas %d chapas do tipo 2. \n", qtd_chapa2);
						break;
					case 3: 
						printf("\nForam estocadas %d chapas do tipo 3. \n", qtd_chapa3);
						break;
				}
				break;
			case 4: //Vizualiza��o dos tipos que nao possuem chapas em estoque.
				if(qtd_chapa1 == 0)
					printf("\nO tipo de chapa 1 nao possue estoque. \n");
				if(qtd_chapa2 == 0)
					printf("\nO tipo de chapa 2 nao possue estoque. \n");
				if(qtd_chapa3 == 0)
					printf("\nO tipo de chapa 3 nao possue estoque. \n");
				if(qtd_chapa1 > 0 && qtd_chapa2 > 0 && qtd_chapa3 > 0)
					printf("\nTodos os tipos de chapa possuem estoque. \n");
				break;
			case 5: //Vizualiza��o da quantidade total de chapas em estoque.
				printf("\nExistem um total de %d chapas armazenadas no estoque. \n", qtd_total);
				break;
			case 6: //Vizualiza��o da quantidade total de metros quadrados de chapas presentes no estoque.
				printf("\nExiste um total de %.2f metros quadrados de chapa armazenados no estoque. \n", qtd_metros);
				break;
			case 7: //Altera��o da quantidade de chapas estocadas de um c�digo escolhido.
				grade(tipo[0], tipo[1], tipo[2], tipo[3], tipo[4], qtd[0], qtd[1], qtd[2], qtd[3], qtd[4]);
				printf("\nInforme o codigo do metal que deseja trocar a quantidade: "); //Solicita��o do c�digo em que � desejado mudar a quantidade.
				scanf("%d", &troca_qtd);
				while(troca_qtd < 0 || troca_qtd > 4){ //Valida��o do c�digo escolhido.
					printf("Invalido! Informe novamente o codigo do metal que deseja trocar a quantidade: ");
					scanf("%d", &troca_qtd);
				}
				while(tipo[troca_qtd] == 0){ //Impedimento de troca de quantidade uma vez que o c�digo escolhido est� vazio no estoque.
					printf("Invalido! Nao existe um metal cadastrado neste codigo, informe novamente o codigo que deseja trocar a quantidade: ");
					scanf("%d", &troca_qtd);
				}
				printf("Digite a nova quantia de chapas para o codigo escolhido: "); //Solicita��o da nova quantia de chapas para o metal escolhido.
				scanf("%d", &nova_qtd);
				while(nova_qtd < 0){ //Valida��o da quantia de chapas inserida.
					printf("Invalido! Digite novamente a nova quantia de chapas para o codigo escolhido: ");
					scanf("%d", &nova_qtd);					
				}
				qtd_total -= qtd[troca_qtd]; //Subtra��o da quantidade anterior na quantidade total de chapas.
				qtd_total += nova_qtd; //Adi��o da nova quantidade na quantidade total de chapas.
				if(tipo[troca_qtd] == 1){
					qtd_chapa1 -= qtd[troca_qtd];
					qtd_chapa1 += nova_qtd;
					qtd_metros -= (3*1.4)*qtd[troca_qtd];
					qtd_metros += (3*1.4)*nova_qtd;
				}
				else if(tipo[troca_qtd] == 2){
					qtd_chapa2 -= qtd[remove];
					qtd_chapa2 += nova_qtd;
					qtd_metros -= (2.5*0.8)*qtd[troca_qtd];
					qtd_metros += (2.5*0.8)*nova_qtd;
				}
				else if(tipo[troca_qtd] == 3){
					qtd_chapa3 -= qtd[remove];
					qtd_chapa3 += nova_qtd;
					qtd_metros -= (6*0.5)*qtd[troca_qtd];
					qtd_metros += (6*0.5)*nova_qtd;
				}
				qtd[troca_qtd] = nova_qtd; //Troca da quantidade de chapas do determinado metal.
				printf("Quantidade do metal de codigo %d realizada com sucesso! \n", troca_qtd);
				break;
			case 8: //Fim do loop que repetia o menu a cada termino de opera��o. Portanto o fim do programa.
				printf("\nFim do programa.");
				loop = 0; //Faz o loop receber 0 interrompendo o la�o de repeti��o.
		}
	}
}

int menu_inicial(){ //Fun��o com retorno e sem par�metro que printa e valida o menu inicial (que obriga a inser��o dos primeitos metais OU a finaliza��o do programa).
	int opcao_inicial;
	printf("Controle de estoque metalurgico:");
	printf("\n[1] Cadastrar primeiros metais");
	printf("\n[8] Fim \n");
	scanf("%d", &opcao_inicial);
	while(opcao_inicial != 1 && opcao_inicial != 8){ //Valida��o da op��o escolhida no menu inicial para obrigar o usu�rio a cadastrar os primeiros metais ou finalizar o programa.
		printf("\nInvalido! Cadastre os primeiros metais para ter acesso ao funcionamento completo do programa, ou entao finalize-o:");
		printf("\n[1] Cadastrar metais");
		printf("\n[8] Fim \n");
		scanf("%d", &opcao_inicial);	
	}
	return opcao_inicial;	
}

int menu(){ //Fun��o com retorno e sem par�metro que printa e valida o menu de op��es completo.
	int opcao;
	printf("\nControle de estoque metalurgico:");
	printf("\n[1] Cadastrar metal");
	printf("\n[2] Remover metal");
	printf("\n[3] Quantidade de chapas estocadas por tipo");
	printf("\n[4] Tipos de chapas de metal sem estoque");
	printf("\n[5] Quantidade total de chapas de metal estocadas");
	printf("\n[6] Quantidade em metros quadrados estocados");
	printf("\n[7] Alteracao da quantidade de chapas estocadas");
	printf("\n[8] Fim \n");
	scanf("%d", &opcao);
	while(opcao < 1 || opcao > 8){ //Valida��o da op��o escolhida no menu.
		printf("\nInvalido! Cadastre os primeiros metais para ter acesso ao funcionamento completo do programa, ou entao finalize-o:");
		printf("\n[1] Cadastrar metal");
		printf("\n[2] Remover metal");
		printf("\n[3] Quantidade de chapas estocadas por tipo");
		printf("\n[4] Tipos de chapas de metal sem estoque");
		printf("\n[5] Quantidade total de chapas de metal estocadas");
		printf("\n[6] Quantidade em metros quadrados estocados");
		printf("\n[7] Alteracao da quantidade de chapas estocadas");
		printf("\n[8] Fim \n");
		scanf("%d", &opcao);	
	}
	return opcao;
}

int grade(int t0, int t1, int t2, int t3, int t4, int q0, int q1, int q2, int q3, int q4){ //Fun��o com retorno e com par�metro que printa a tabela completa do estoque.
	printf("\nCod.\tTipo\tQuantidade");
	printf("\n[0]\t%d\t%d", t0, q0);
	printf("\n[1]\t%d\t%d", t1, q1);
	printf("\n[2]\t%d\t%d", t2, q2);
	printf("\n[3]\t%d\t%d", t3, q3);
	printf("\n[4]\t%d\t%d \n", t4, q4);
}
