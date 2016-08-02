#include <stdio.h>

int main() {

	int v1, v2, n1, n2, voltas = 1;

	scanf("%d %d", &v1, &v2);	
	
	n1 = v1;
	n2 = v2;
	while((n2 - n1) < v1) {
		n1 += v1;
		n2 += v2;

		voltas++;
	}
	
	voltas++;
	printf("%d\n", voltas);

	return 0;
}