#include <stdio.h>

int main() {

	double a, b, c, area = 0, perimetro = 0;

	scanf("%lf %lf %lf", &a, &b, &c);

	if(((b + c) > a) && ((a + c) > b) && ((a + b) > c)) {
		perimetro = a + b + c;
		printf("Perimetro = %.1lf\n", perimetro);
	} else {
		area = ((a + b) * c) / 2;
		printf("Area = %.1lf\n", area);
	}

	return 0;
}