#include <stdio.h>
#include <stdLib.h>


int main() {
	int m[5][5];
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("Diagonal principal - Fila %d, Columna %d: ", i + 1, j + 1);
				scanf("%d", &m[i][j]);
			} else if (i < j) {
				printf("Triángulo superior - Fila %d, Columna %d: ", i + 1, j + 1);
				scanf("%d", &m[i][j]);
			} else {
				printf("Triángulo inferior - Fila %d, Columna %d: ", i + 1, j + 1);
				scanf("%d", &m[i][j]);
			}
		}
	}
	
	printf("La matriz es:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
