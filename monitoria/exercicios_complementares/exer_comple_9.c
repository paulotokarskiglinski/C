#include <stdio.h>
#include <math.h>

void main(){

float a, b, c, x1, x2, r;

	printf("Digite A, B e C respectivamente \n");
	scanf("%f %f %f", &a, &b, &c);

	r = sqrt(b*b - 4*a*c);
	x1 = (-b + r /( 2 * a));
	x2 = (-b - r /( 2 * a));

	printf("X1 = %f", x1);
	printf("X2 = %f", x2);

}
