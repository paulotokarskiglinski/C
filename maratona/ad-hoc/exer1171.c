#include <stdio.h>

int main() {

	int i, op, cont, num[2001];

	for(cont = 0; cont < 2001; cont++) {
		num[cont] = 0;
	}

	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%d", &i);
		
		num[i] += 1;
	}

	for(cont = 0; cont < 2001; cont++){
		if(num[cont]!=0 ) {
			printf("%d aparece %d vez(es)\n", cont, num[cont]);
		}
	}

	return 0;
}
