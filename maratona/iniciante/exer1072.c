#include <stdio.h>

int main() {
	
	int n, x[10000], cont, in = 0, out = 0;

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++)
		scanf("%d", &x[cont]);

	for(cont = 0; cont < n; cont++) {
		if(x[cont] >= 10 && x[cont] <= 20)
			in++;
		else
			out++;
	}

	printf("%d in\n", in);
	printf("%d out\n", out);	
	
	return 0;
}