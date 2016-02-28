#include <stdio.h>

int main() {

	int n, cont = 0;

	scanf("%d", &n);

	while(cont < 6) {
		if((n % 2) != 0) {
			printf("%d\n", n);
			cont++;
		}
		n++;
	}

	return 0;
}