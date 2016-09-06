#include <stdio.h>

int main() {
	
	int cont = 0;
	char nome[100];
	double dist, total = 0.0;

	while(scanf("%[^\n]", nome) != EOF) {
		scanf("%lf", &dist);
		total += dist;
		cont++;
	}

	printf("%.1lf\n", (total/cont));
	
	return 0;
}