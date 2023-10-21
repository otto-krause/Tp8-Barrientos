#include <stdio.h>
#include <stdLib.h>


void ordenarMatriz(int m[3][3]) {
	int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = i; k < 3; k++) {
				for (int l = (k == i) ? j + 1 : 0; l < 3; l++) {
					if (m[i][j] > m[k][l]) {
						temp = m[i][j];
						m[i][j] = m[k][l];
						m[k][l] = temp;
					}
				}
			}
		}
	}
}

int main() {
	int m[3][3];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("F%dC%d: ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
	ordenarMatriz(m);
	
	printf("Contenido de la matriz ordenada:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
