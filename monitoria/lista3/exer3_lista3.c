#include <stdio.h>

int main() {
	
	int vet[5], cont;
	char romanos[10][4] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
	
	for(cont = 0; cont < 5; cont++) {
		printf("Digite um numero: ");
		scanf("%d", &vet[cont]);
	}

	puts("\nResultado: ");
	for(cont = 0; cont < 5; cont++)
		printf("\nDecimal: %d\tRomano: %s\n", vet[cont], romanos[vet[cont]-1]);
	
	return 0;
}
