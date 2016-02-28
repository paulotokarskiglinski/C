#include <stdio.h>

int main() {
	
	int v[20], cont, aux, i = 0;

	for(cont = 0; cont < 20; cont++)
		scanf("%d", &v[cont]);

	for(cont = 0, i = 19; cont < 10; cont++, i--) {
		aux = v[i];
		v[i] = v[cont];
		v[cont] = aux;
	}

	for(cont = 0; cont < 20; cont++)
		printf("N[%d] = %d\n", cont, v[cont]);

	return 0;
}