/*Sabendo que x e y são variáveis do tipo inteiro, diga qual o resultado de cada uma das seguintes atribuições:
y = 4+3*2;           y=
x = 3*4/2-2;         x=
y = y++;             y=
x += 3;              x=
y -= 2;              y=
x /= 3;              x=
y %= 3;              y=
x *= y++ + 3;        x=        y=*/

#include <stdio.h>
main()
{
	int x, y;
	printf("y = 4+3*2; y = %d", 4+3*2);
	printf("\nx = 3*4/2-2; x = %d", 3*4/2-2);
	//Pelo o que eu entendi do enunciado, as duas primeiras contas assumem valores para x e y, e em seguida as demais contas são realizadas com esses novos valores.
	printf("\n--------------------------------");
	y = 4+3*2;
	x = 3*4/2-2;
	printf("\ny = y++; y = %d", y++);
	printf("\nx += 3; x = %d", x += 3);
	printf("\ny -= 2; y = %d", y -= 2);
	printf("\nx /= 3; x = %d", x /= 3);
	printf("\ny %= 3; y = %d", y %= 3);
	printf("\nx *= y++ + 3; x = %d", x *= y++ + 3);
}
