#include <stdio.h>

int main() {
	
	int n = 0, i, j, soma = 1;

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		for(j = 0; j < 4; j++) {
			if(j == 3)  {
				printf("PUM\n");
				soma++;
			}
			else printf("%d ", soma++);
		}
	}

	return 0;
}