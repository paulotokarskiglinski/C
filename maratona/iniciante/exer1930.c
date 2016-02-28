#include <stdio.h>

int main() {
	
	int cont, t[4], rs = 0;

	for(cont = 0; cont < 4; cont++) {
		scanf("%d", &t[cont]);
		if(cont != 3)
			rs += (t[cont] - 1);
	}

	rs += t[3];
	printf("%d\n", rs);
	
	return 0;
}