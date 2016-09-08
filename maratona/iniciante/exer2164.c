#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	double fibo;	

	scanf("%d", &n);

	fibo = (pow(((1 + sqrt(5))/2), n) - pow(((1 - sqrt(5))/2), n)) / sqrt(5);

	printf("%0.1lf\n", fibo);
	
	return 0;
}