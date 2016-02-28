#include <stdio.h>

int main() {

	int n = 0, cont;
	double n1 = 0, n2 = 0, n3 = 0, media[10000];

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%lf %lf %lf", &n1, &n2, &n3);
		media[cont] = (n1*2 + n2*3 + n3*5) / 10;
	}

	for(cont = 0; cont < n; cont++)
		printf("%.1lf\n", media[cont]);

	return 0;
}