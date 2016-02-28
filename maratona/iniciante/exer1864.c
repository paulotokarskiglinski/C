#include <stdio.h>

int main() {
	
	int cont, n;
	char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED"; 	
	
	scanf("%d", &n);

	for(cont = 0; cont < n; cont++)
		printf("%c", frase[cont]);

	printf("\n");

	return 0;
}