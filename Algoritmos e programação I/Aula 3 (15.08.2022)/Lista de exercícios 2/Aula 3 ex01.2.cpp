/*Sendo x uma variável do tipo int com valor 17 e y uma variável float com valor 3.2, calcule o valor das seguintes expressões, de acordo com as regras da linguagem C.
a) x / 4 + y
b) x <= y * 6
c) (x % 4) + ((int) y * 10) 
d) (x / 6  - x / 3) + 4*/

#include <stdio.h>
main()
{
	int x;
	float y;
	x = 17;
	y = 3.2;
	printf("a) x / 4 + y = %.2f", (float)x / (4 + y)); 
	if ((float)x <= y * 6)
	{
		printf("\nb) x <= y * 6 -> True");
	}
	else
	{
		printf("\nb) x <= y * 6 -> False");
	}
	printf("\nc) (x % 4) + ((int) y * 10) = %d", (x % 4) + ((int)y * 10));
	printf("\nd) (x / 6  - x / 3) + 4 = %.2f", (((float)x / 6) - ((float)x / 3)) + 4);
}

//Na a, tive usar o cast no x pra conseguir realizar a operação, com uma var sendo int e a outra float a operação não é realizada.
//Na d tive que usar o cast no x porque o resultado não tava aparecendo corretamente.
