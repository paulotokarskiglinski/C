#include <stdio.h>

int main() {
	
	int a = 0, b = 0;

	do {
		scanf("%d %d", &a, &b);

		if(a < b)
			printf("Crescente\n");
		else if(a > b)
			printf("Decrescente\n");

	} while(a != b);	
	
	return 0;
}