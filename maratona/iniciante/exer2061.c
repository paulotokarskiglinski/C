#include <stdio.h>
#include <string.h>

int main() {
	
	int abas, cliques, cont;
	char op[7];

	scanf("%d %d", &abas, &cliques);
	for(cont = 0; cont < cliques; cont++) {
		scanf("%s", op);
		if(strcmp(op, "fechou") == 0)
			abas = (abas - 1) + 2;
		else if(strcmp(op, "clicou") == 0)
			abas--;
	}
	printf("%d\n", abas);
	return 0;
}