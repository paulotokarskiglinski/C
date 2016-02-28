#include <stdio.h>

int main() {
	
	int n, cont;

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		if(cont == n - 1) printf("Ho!\n");
		else printf("Ho ");
	}	
	
	return 0;
}