#include <stdio.h>

int main() {
	
	double a, b, c = 0;
	
	scanf("%lf %lf", &a, &b);

	c = ((b / a) - 1) * 100;
	printf("%0.2f%%\n", c);

	return 0;
}