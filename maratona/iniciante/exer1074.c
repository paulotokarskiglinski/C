#include <stdio.h>

int main() {
	
	int n, cont, v[10000];	
	
	scanf("%d", &n);

	for(cont = 0; cont < n; cont++)
		scanf("%d", &v[cont]);

	for(cont = 0; cont < n; cont++) {
		if(v[cont] == 0)
			printf("NULL\n");
		else if((v[cont] > 0) && (v[cont] % 2) == 0)
			printf("EVEN POSITIVE\n");
		else if((v[cont] > 0) && (v[cont] % 2) != 0)
			printf("ODD POSITIVE\n");

		else if((v[cont] < 0) && (v[cont] % 2) == 0)
			printf("EVEN NEGATIVE\n");
		else if((v[cont] < 0) && (v[cont] % 2) != 0)
			printf("ODD NEGATIVE\n");
	}

	return 0;
}