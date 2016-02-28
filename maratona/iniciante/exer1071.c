#include <stdio.h>

int main() {
	
	int a = 0, b = 0, rs = 0, cont;

	scanf("%d %d", &a, &b);

	if(a >= b) {
		for(cont = a - 1; cont > b; cont--) {
			if((cont % 2) != 0)
				rs += cont;
			
		}
	} else {
		for(cont = a + 1; cont < b; cont++) {
			if((cont % 2) != 0)
				rs += cont;
		}
	}

	printf("%d\n", rs);
	
	return 0;
}