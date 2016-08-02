#include <stdio.h>

int main() {
	
	int n = 0, op1 = 0, op2 = 0, j1, j2, cont;	
	
	do {

		j1 = j2 = 0;

		scanf("%d", &n);
		if(n != 0) {
			for(cont = 0; cont < n; cont++) {
				scanf("%d %d", &op1, &op2);
				if(op1 > op2)
					j1++;
				else if(op2 > op1)
					j2++;
			}

			printf("%d %d\n", j1, j2);
		}

	} while(n != 0);

	return 0;
}