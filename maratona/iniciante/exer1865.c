#include <stdio.h>
#include <string.h>

int main() {
	
	int n, cont, nwts;
	char nomes[20][20];

	scanf("%d", &n);
	for(cont = 0; cont < n; cont++)
		scanf("%s %d", nomes[cont], &nwts);

	for(cont = 0; cont < n; cont++) {
		if(strcmp(nomes[cont], "Thor") == 0)
			printf("Y\n");
		else 
			printf("N\n");
	}

	return 0;
}