#include <stdio.h>

int main() {

	int inicio, fim, tempo = 0;

	scanf("%d %d", &inicio, &fim);

	do {
		inicio++;
		tempo++;
		if(inicio == 24)
			inicio = 0;
	} while(inicio != fim);

	printf("O JOGO DUROU %d HORA(S)\n", tempo);

	return 0;
}