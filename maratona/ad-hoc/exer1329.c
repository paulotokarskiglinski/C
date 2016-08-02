#include <stdio.h>

int main() {
	
	int cont, op = 0, jg = 0, j = 0, m = 0;

	do {

		scanf("%d", &op);
		if(op != 0) {
			for(cont = 0; cont < op; cont++) {
				scanf("%d", &jg);
				if(jg == 0)
					m++;
				else if(jg == 1)
					j++;
			}
		
			printf("Mary won %d times and John won %d times\n", m, j);
			j = 0;
			m = 0;
		}

	} while(op != 0);
	
	return 0;
}