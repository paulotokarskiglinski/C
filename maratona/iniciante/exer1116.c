#include <stdio.h>

int main() {
	
	double rs = 0.0, aa = 0.0, bb = 0.0;
	int n = 0, cont, a = 0, b = 0;

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d %d", &a, &b);
		if(b == 0)
			printf("divisao impossivel\n");
		else {
			aa = a;
			bb = b;
			printf("%.1lf\n", (aa/bb));
		}
	}
	
	return 0;
}