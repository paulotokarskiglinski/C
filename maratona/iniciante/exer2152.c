#include <stdio.h>

int main() {
	
	int n, hh, mm, op, cont;

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++) {
		scanf("%d %d %d", &hh, &mm, &op);
		
		if(hh < 10)	printf("0%d:", hh);
		else				printf("%d:",  hh);

		if(mm < 10) printf("0%d - ", mm);
		else				printf("%d - ",  mm);

		if(op == 0)
			printf("A porta fechou!\n");
		else
			printf("A porta abriu!\n");
	}
	return 0;
}