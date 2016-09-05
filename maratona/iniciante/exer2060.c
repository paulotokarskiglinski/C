#include <stdio.h>

int main() {
	
	int n, op, cont, mult[5];

	scanf("%d", &op);
	for(cont = 0; cont < 5; cont++)
		mult[cont] = 0;

	for(cont = 0; cont < op; cont++) {
		scanf("%d", &n);

		if((n % 2) == 0)	mult[0] += 1;
		if((n % 3) == 0)	mult[1] += 1;
		if((n % 4) == 0)	mult[2] += 1;
		if((n % 5) == 0)	mult[3] += 1;
	}

	for(cont = 0; cont < 4; cont++)
		printf("%d Multiplo(s) de %d\n", mult[cont], cont + 2);
	
	return 0;
}