#include <stdio.h>

int main() {

	int i = 1, cont = 0, j = 7;

	for(i = 1; i <= 9; i+=2) {
		for(cont = 0; cont < 3; cont++) {
			printf("I=%d J=%d\n", i, j);
			j--;
		}
		j = 7;
	}

	return 0;
}