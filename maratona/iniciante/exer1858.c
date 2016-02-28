#include <stdio.h>

int main() {
	
	int n[1000], x, cont, menor = 30, menorCont;

	scanf("%d", &x);
	for(cont = 0; cont < x; cont++) 
		scanf("%d", &n[cont]);

	for(cont = 0; cont < x; cont++)
		if(n[cont] < menor) {
			menor = n[cont];
			menorCont = cont + 1;
		}

	printf("%d\n", menorCont);
	
	return 0;
}