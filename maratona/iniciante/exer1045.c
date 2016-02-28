#include <stdio.h>
#include <math.h>

int main() {

	int cont, i, j;
	double v[3], aux;

	scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);

	for(i = 0; i < 3; i++) {
		for(j = i + 1; j < 3; j++) {
			if(v[i] < v[j]) {
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}

	if(v[0] >= (v[1] + v[2]))
		printf("NAO FORMA TRIANGULO\n");
	else {
		if(pow(v[0], 2) == (pow(v[1], 2) + pow(v[2], 2)) ) { printf("TRIANGULO RETANGULO\n"); }
		if(pow(v[0], 2) > (pow(v[1], 2) + pow(v[2], 2)) ) { printf("TRIANGULO OBTUSANGULO\n"); }
		if(pow(v[0], 2) < (pow(v[1], 2) + pow(v[2], 2)) ) { printf("TRIANGULO ACUTANGULO\n"); }
		if(v[0] == v[1] && v[0] == v[2] && v[1] == v[2]) { printf("TRIANGULO EQUILATERO\n"); }
		if((v[0] == v[1] && v[1] != v[2]) || (v[1] == v[2] && v[2] != v[0]) || (v[0] == v[2] && v[2] != v[1])) { printf("TRIANGULO ISOSCELES\n"); }
	}

	return 0;
}