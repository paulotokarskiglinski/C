#include <stdio.h>

int main() {
	
	int n = 0, v[100], cont;

	scanf("%d", &n);

	v[0] = 0;
	v[1] = 1;

	if(n == 1) printf("%d", v[0]);
	else if(n == 2) printf("%d %d", v[0], v[1]);
	else if(n > 2){
		printf("%d %d", v[0], v[1]);
		for(cont = 2; cont < n; cont++)
			printf(" %d", v[cont] = v[cont - 1] + v[cont - 2]);
	}
	printf("\n");
	
	return 0;
}