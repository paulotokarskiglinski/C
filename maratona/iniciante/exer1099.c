#include <stdio.h>

int main() {

	int n = 0, cont, i, a = 0, b = 0, rs[10000];

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d %d", &a, &b);
		rs[cont] = 0;

		if(a >= b) {
			for(i = a - 1; i > b; i--) {
				if((i % 2) != 0)
					rs[cont] += i;
			}
		} else {
			for(i = a + 1; i < b; i++) {
				if((i % 2) != 0) 
					rs[cont] += i;
			}
		}
	}

	for(cont = 0; cont < n; cont++)
		printf("%d\n", rs[cont]);

	return 0;
}