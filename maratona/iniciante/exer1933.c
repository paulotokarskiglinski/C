#include <stdio.h>

int main() {
	
	int cont, cartas, maior = -1;

	for(cont = 0; cont < 2; cont++) {
		scanf("%d", &cartas);
		if(cartas > maior)
			maior = cartas;
	}

	printf("%d\n", maior);	
	
	return 0;
}