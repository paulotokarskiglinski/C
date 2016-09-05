#include <stdio.h>

int main() {
	
	int i, j, op, cont, casos = 1, total = 1;

	while(scanf("%d", &op) != EOF) {

		for(cont = op; cont > 0; cont--)
			total += cont;

		if(total == 1)
			printf("Caso %d: %d numero\n", casos, total);
		else if(total > 1)
			printf("Caso %d: %d numeros\n", casos, total);

		printf("0");
		for(cont = 0; cont <= op; cont++) {
			for(i = 1; i <= cont; i++)
				printf(" %d", cont);
		}
		casos++;
		total = 1;
		printf("\n\n");
	}	
	return 0;
}