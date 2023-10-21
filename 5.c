#include <stdio.h>
#include <stdLib.h>


int main() {
	int n[10];
	int e[10];
	int i = 0;
	
	printf("Ingrese números de socio y edades (0 para finalizar la carga):\n");
	while (i < 10) {
		int ns, edad;
		printf("Número de socio: ");
		scanf("%d", &ns);
		
		if (ns == 0) {
			break;
		}
		
		printf("Edad: ");
		scanf("%d", &edad);
		
		n[i] = ns;
		e[i] = edad;
		i++;
	}
	
	for (int j = 0; j < i - 1; j++) {
		int mi = j;
		for (int k = j + 1; k < i; k++) {
			if (e[k] < e[mi]) {
				mi = k;
			}
		}
		
		int te = e[j];
		e[j] = e[mi];
		e[mi] = te;
		
		int tn = n[j];
		n[j] = n[mi];
		n[mi] = tn;
	}
	
	printf("\nLista ordenada por edad:\n");
	for (int j = 0; j < i; j++) {
		printf("Número de socio: %d, Edad: %d\n", n[j], e[j]);
	}
	
	return 0;
}
