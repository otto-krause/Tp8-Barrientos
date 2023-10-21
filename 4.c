#include <stdio.h>
#include <stdLib.h>


int main() {
	int sorteos[3][6];
	int frecuencia[43] = {0};
	int maxFrecuencia = 0;
	int numMasFrecuente[43] = {0};
	
	for (int s = 0; s < 3; s++) {
		printf("Ingresar los 6 números para el sorteo %d:\n", s + 1);
		for (int i = 0; i < 6; i++) {
			int num;
			do {
				printf("Número %d: ", i + 1);
				scanf("%d", &num);
			} while (num < 0 || num > 42 || frecuencia[num] > 0);
			
			sorteos[s][i] = num;
			frecuencia[num]++;
		}
	}
	
	printf("Ingresar un número N: ");
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < 43; i++) {
		if (frecuencia[i] > maxFrecuencia) {
			maxFrecuencia = frecuencia[i];
			numMasFrecuente[0] = i;
		} else if (frecuencia[i] == maxFrecuencia) {
			numMasFrecuente[maxFrecuencia] = i;
		}
	}
	
	printf("El número que más veces salió es: ");
	for (int i = 0; i < maxFrecuencia; i++) {
		printf("%d ", numMasFrecuente[i]);
	}
	printf("\n");
	
	for (int s = 0; s < 3; s++) {
		printf("Sorteo %d (números ordenados de menor a mayor): ", s + 1);
		for (int i = 0; i < 6; i++) {
			for (int j = i + 1; j < 6; j++) {
				if (sorteos[s][i] > sorteos[s][j]) {
					int temp = sorteos[s][i];
					sorteos[s][i] = sorteos[s][j];
					sorteos[s][j] = temp;
				}
			}
		}
		for (int i = 0; i < 6; i++) {
			printf("%d ", sorteos[s][i]);
		}
		printf("\n");
	}
	
	int repeticionesN = frecuencia[n];
	printf("El número %d se repite %d veces entre todos los sorteos.\n", n, repeticionesN);
	
	return 0;
}
