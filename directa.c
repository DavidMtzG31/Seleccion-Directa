#include <stdio.h>

int main(void) {
	/* Declaramos un array de enteros. */
	int vector[5] = {1, 5, 3, 2, 4};

	/* Declaramos otras variables que
	 * nos serviran para iterar. */
	int i, j, k, aux;

	/* Ordenamos el array de enteros. */
	for (k = 0; k <= 2; k++) {
		i = k;
		aux = vector[k];
		for (j = k + 1; j <= 4; j++) {
			if (vector[j] < aux) {
				i = j;
				aux = vector[i];
			}
		}
		vector[i] = vector[k];
		vector[k] = aux;
	}

	/* Imprimimos el array de enteros. */
	for (i = 0; i <= 4; i++) {
		printf("%d ", vector[i]);
	}
}
