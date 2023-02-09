/*Um fazendeiro deseja saber quantos litros de água ele está gastando por dia, sabendo-se que cada limoeiro necessita de 2 litros de água por dia e cada goiabeira de 3 litros. 
Solicite as informações sobre as quantidades de árvores de cada tipo que o fazendeiro possui e informe a quantidade de litros gastos por dia naquela fazenda.*/

#include <stdio.h>
main()
{
	int limoeiros, goiabeiras;
	printf("Digite a quantia de limoeiros que voce tem: ");
	scanf("%d", &limoeiros);	
	printf("Digite a quantia de goiabeiras que voce tem: ");
	scanf("%d", &goiabeiras);
	printf("Voce vai precisar de %dL de agua para regar as suas arvores.", limoeiros*2+goiabeiras*3);
}
