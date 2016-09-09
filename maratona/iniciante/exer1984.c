#include <stdio.h>
#include <string.h>

int main() {

	int cont;
	char n[1000000];

	scanf("%s", n);
	for(cont = strlen(n) - 1; cont >= 0; cont--)
		printf("%c", n[cont]);
	printf("\n");
	
	return 0;
}