#include <stdio.h>

int main() {
	
	int r, c, cont, certos = 0;

	scanf("%d", &r);
	for(cont = 0; cont < 5; cont++) {
		scanf("%d", &c);
		if(c == r)
			certos++;
	}

	printf("%d\n", certos);
	
	return 0;
}