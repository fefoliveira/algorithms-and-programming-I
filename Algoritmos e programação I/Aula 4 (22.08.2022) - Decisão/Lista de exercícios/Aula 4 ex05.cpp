/*O programa deve calcular o peso ideal de uma pessoa, porém este cálculo é diferente para homens e mulheres, assim utilize a fórmula adequada:
Homens: (72.7 * altura)–58 
Mulheres: (62.1 * altura)–44.7*/

#include <stdio.h>
main()
{
	float altura;
	char sexo[0];
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	if (altura <= 0)
		printf("Voce digitou uma altura invalida.");
	printf("Informe o seu sexo biologico [M/F]: ");
	scanf("%c", &sexo);
	if (sexo == "M" || sexo == "m")
		printf("O peso ideal para voce e de %.1fKg.", (72.7 * altura)-58.0);
	else if (sexo == "F" || sexo == "f")
		printf("O peso ideal para voce e de %.1fKg.", (62.1 * altura)-44.7);
	else
		printf("Voce nao digitou um sexo valido.");
}
