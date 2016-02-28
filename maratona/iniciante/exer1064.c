#include <stdio.h>

int main() {

	int qtd = 0, cont;
	double v[6], media = 0;

	scanf("%lf %lf %lf %lf %lf %lf", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);

	for(cont = 0; cont < 6; cont++) {
		if(v[cont] > 0.0) {
			media += v[cont];
			qtd++;
		}
	}

	media /= qtd;

	printf("%d valores positivos\n", qtd);
	printf("%.1lf\n", media);

	return 0;
}