#include <stdio.h>

int main() {

	int cont, op = 0;
	float a[2], b[2], s[2];
	float total1[3] = {0, 0, 0}, total2[3] = {0, 0, 0};
	float pts[3] = {0.0, 0.0, 0.0};
	char nome[100];

	scanf("%d", &op);
	while(op > 0) {
		scanf("%s", nome);
		scanf("%f %f %f", &s[0], &b[0], &a[0]);
		scanf("%f %f %f", &s[1], &b[1], &a[1]);

		total1[0] += s[0];
		total1[1] += b[0];
		total1[2] += a[0];

		total2[0] += s[1];
		total2[1] += b[1];
		total2[2] += a[1];

		op--;
	}

	for(cont = 0; cont < 3; cont++)
		pts[cont] = ((total2[cont] * 100) / total1[cont]);

	printf("Pontos de Saque: %0.2f %%.\nPontos de Bloqueio: %0.2f %%.\nPontos de Ataque: %0.2f %%.\n", pts[0], pts[1], pts[2]);
	
	return 0;
}