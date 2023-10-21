#include <stdio.h>
#include <stdLib.h>


int main() {
	int m[3][3];
	
	printf("Llenar las columnas pares:\n");
	for (int j = 0; j < 3; j += 2) {
		for (int i = 0; i < 3; i++) {
			printf("Fila %d, Columna %d: ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("Llenar las columnas impares:\n");
	for (int j = 1; j < 3; j += 2) {
		for (int i = 0; i < 3; i++) {
			printf("Fila %d, Columna %d: ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("Matriz resultante:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
