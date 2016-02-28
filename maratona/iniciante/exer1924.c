#include <stdio.h>

int main() {
	
	int n, cont;
	char curso[101];

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++) {
		__fpurge(stdin);
		scanf("%s", curso);
	}

	printf("Ciencia da Computacao\n");	
	
	return 0;
}