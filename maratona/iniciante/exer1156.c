#include <stdio.h>

int main() {
	
	double a, b, s;

	for(a = 1.0, b = 1.0; a != 39.0; a+=2.0, b*=2.0)
		s += a / b;

	printf("%.2lf\n", s);
	
	return 0;
}