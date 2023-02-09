#include <stdio.h>
int main(){
	int mat[2][3], i, j;
	
	for(i = 0; i <= 2; i++){ //For da qtd de linhas da matriz.
		for(j = 0; j <= 3; j++){ //For da qtd de colunas da matriz;
			printf("Digite o valor [%d][%d] da matriz: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i = 0; i <= 2; i++){
        for(j = 0; j <= 3; j++){
            printf("\nMatriz[%d][%d] = %d ", i, j, mat[i][j]);
        }
	}
}
