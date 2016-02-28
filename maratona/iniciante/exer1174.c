#include <stdio.h>

int main() {
	
	int cont;
	double v[100], n;

	for(cont = 0; cont < 100; cont++)
		scanf("%lf", &v[cont]);

	for(cont = 0; cont < 100; cont++) {
		if(v[cont] <= 10.0)
			printf("A[%d] = %.1lf\n", cont, v[cont]);
	}
	
	return 0;
}