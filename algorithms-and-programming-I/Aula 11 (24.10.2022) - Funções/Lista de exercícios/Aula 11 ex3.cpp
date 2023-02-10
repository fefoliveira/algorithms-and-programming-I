/*Faça um programa que implemente uma função que recebe a idade de um nadador por parâmetro e retorna, 
também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:  
   Idade	               Categoria
5 a 7 anos	              Infantil A
8 a 10 anos	              Infantil B
11-13 anos	              Juvenil A
14-17 anos 	              Juvenil B
Maiores de 18 anos        Adulto*/

#include <stdio.h>

int categoria(int idade);

int main(){
	int idade = 0, cat;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	while(idade < 5 || idade > 122){
		if(idade < 5)
			printf("Invalido! O nadador precisa ter no minimo 5 anos de idade. Digite novamente a idade do nadador: ");
		else if(idade > 122)
			printf("Incoerente! Nao existe registro de alguem com mais de 122 anos de idade. Digite novamente a idade do nadador: ");
		scanf("%d", &idade);
	}
	cat = categoria(idade);
	switch(cat){
		case 1:
			printf("\nO nadador pertence a categoria Infantil A.");
			break;
		case 2:
			printf("\nO nadador pertence a categoria Infantil B.");
			break;
		case 3:
			printf("\nO nadador pertence a categoria Juvenil A.");
			break;
		case 4:
			printf("\nO nadador pertence a categoria Juvenil B.");
			break;
		case 5:
			printf("\nO nadador pertence a categoria Adulto.");
			break;
	}
}

int categoria(int idade){
	if(idade >= 5 && idade <= 7)
		return 1;
	else if(idade >= 8 && idade <= 10)
		return 2;
	else if(idade >= 11 && idade <= 13)
		return 3;
	else if(idade >= 14 && idade <= 17)
		return 4;
	else if(idade > 18)
		return 5;
}

