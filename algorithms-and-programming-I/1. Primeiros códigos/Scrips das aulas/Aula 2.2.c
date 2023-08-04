#include<stdio.h>
main()
{
	int valor = 5;
	char letra = 'A';  //Para uma letra na variável a ser interpretada dentro de um %c, usa-se aspas simples.
	float sal = 500.50;
	
	printf("Valor da variavel = %d\n", valor);
	printf("A letra %c foi definida\n", letra);
	printf("Valor %d foi lido %d\n", valor, 50);
	printf("Foi lida a letra %c e o valor %d\n", letra, valor);
	printf("O salario e %2.f\n", sal);
	printf("O salario e %4.f\n", sal);
}

//Usa-se // para adicionar um comentário
//Usa-se /* para abriru m bloco de comentário e */ para fechar
 
/*
Tipos de dados: 
	%d = int
	%f = float
	%c = chat
	%lf = double
	%s = palavra
	
Para restringir a quantia de zeros num float, usa-se o %x.f, para a quantia de casas a serem restringidas.

Para pular linha usa-se \n dentro das duas aspas.
*/
