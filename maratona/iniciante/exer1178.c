#include <stdio.h>

int main() {
	
	int cont;
	double v[100], n;	

	scanf("%lf", &n);

	for(cont = 0; cont < 100; cont++) {
		v[cont] = n;
		printf("N[%d] = %.4lf\n", cont, v[cont]);
		n /= 2;
	}

	return 0;
}