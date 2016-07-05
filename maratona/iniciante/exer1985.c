#include <stdio.h>

double valor(int op) {
	double n;
	if(op == 1001) n = 1.50;
	if(op == 1002) n = 2.50;
	if(op == 1003) n = 3.50;
	if(op == 1004) n = 4.50;
	if(op == 1005) n = 5.50;

	return n;
}

int main() {
	
	double final = 0.0;
	int n, cont, op, qtd;

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++) {
		scanf("%d %d", &op, &qtd);
		final += valor(op) * qtd;
	}

	printf("%0.2f\n", final);
	
	return 0;
}