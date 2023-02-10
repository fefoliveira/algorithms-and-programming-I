/*Indique qual o resultado de cada uma das seguintes expressões:
a) 5>20 || 20>5               R:
b) !(73%2 != 0)               R:
c) 21.6/3.0 + 3.0             R:
d) 5%3*2+7>=2                 R:*/

#include <stdio.h>
main()
{
	printf("a) 5 > 20 || 20 > 5; R: ");
	if (5 > 20 || 20 > 5)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	printf("\nb) !(73%2 != 0); R: ");
	if (!(73%2 != 0))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	printf("\nc) 21.6/3.0 + 3.0; R: %.2f", 21.6/3.0 + 3.0);
	printf("\nd) 5%3*2+7 >= 2; R: ");
	if (5%3*2+7 >= 2)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
